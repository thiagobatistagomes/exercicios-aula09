#include <stdio.h>
#include <string.h>

/*
    Ler duas strings A e B e mostrar quantas vezes a string A ocorre dentro da string B.
*/

int main()
{
    char strA[100], strB[100];
    int i, j;

    printf("Digite a string A: ");
    scanf(" %s", strA);

    printf("Digite a string B: ");
    scanf(" %s", strB);

    int lenA = strlen(strA);
    int lenB = strlen(strB);
    int count = 0;

    for (i = 0; i <= lenB - lenA; i++)
    {
        for (j = 0; j < lenA; j++)
        {
            if (strB[i + j] != strA[j])
            {
                break;
            }
        }   

        if (j == lenA) // Encontrou uma ocorrência completa da string A dentro de B
        {
            count++;
        }
    }

    printf("A string A ocorre %d vez(es) dentro da string B.\n", count);

    return 0;
}