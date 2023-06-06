#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[100];
    int i, j, palindromo;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    // Removendo os espaços da frase
    char fraseSemEspaco[100];
    int k = 0;
    for (i = 0; i < strlen(frase); i++)
    {
        if (!isspace(frase[i]))
        {
            fraseSemEspaco[k] = tolower(frase[i]);
            k++;
        }
    }
    fraseSemEspaco[k] = '\0';

    // Verificando se é um palíndromo
    palindromo = 1;

    for (i = 0, j = strlen(fraseSemEspaco) - 1; i < j; i++, j--)
    {
        if (fraseSemEspaco[i] != fraseSemEspaco[j])
        {
            palindromo = 0; // Não é um palíndromo
            break;
        }
    }

    if (palindromo)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }

    return 0;
}