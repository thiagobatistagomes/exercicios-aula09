#include <stdio.h>

// Faça um programa que leia uma frase e conte quantas vogais a frase possui no total.

int main ()
{
    char frase[40];
    int vogais, i;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    i = 0;
    vogais = 0;
    while(frase[i] != '\0')
    {
        if(frase[i] == 'a')
        {
            vogais++;
        }
        else if(frase[i] == 'e')
        {
            vogais++;
        }
        else if(frase[i] == 'i')
        {
            vogais++;
        }
        else if(frase[i] == 'o')
        {
            vogais++;
        }
        else if(frase[i] == 'u')
        {
            vogais++;
        }
        i++;
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}