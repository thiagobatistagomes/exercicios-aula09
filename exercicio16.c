#include <stdio.h>
#include <ctype.h>

/*
    Faça um programa que receba uma frase e converta a primeira letra de cada palavra para maiúscula.
*/

int main ()
{
    char frase[100];
    int i;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    if(frase[0] != ' ')
        {
            frase[0] = toupper(frase[0]);
        }

    for(i = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ')
        {
            frase[i + 1] = toupper(frase[i + 1]);
        }
    }

    printf("%s", frase);

    return 0;
}