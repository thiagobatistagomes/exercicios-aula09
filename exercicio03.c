#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Faça um programa que leia uma frase e conte quantos espaços existem na frase.

int main ()
{
    char frase[60];
    int espaco = 0, i;

    printf("Digite uma frase: \n");
    scanf("%60[^\n]", frase);

    for(i = 0; i < strlen(frase); i++)
    {
        if(isspace(frase[i]))
        {
            espaco++;
        }
    }

    printf("Quantidade de espacos: %d", espaco);

    return 0;
}