#include <stdio.h>

// Faça um programa que leia uma frase e a imprima de trás para frente.

int main ()
{
    char frase[40];
    char reverse[40];
    int i;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    i = '\0';
    while(i != -1)
    {
        reverse[i] = frase[i];
        i--;
    }

    printf("Frase de tras para frente: %s\n", reverse);

    return 0;
}