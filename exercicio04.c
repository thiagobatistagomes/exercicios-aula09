#include <stdio.h>

// Faça um programa que leia uma frase e a imprima de trás para frente.

int main ()
{
    char frase[40];
    char reverse[40];
    int i, j;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    i = 0;
    j = 0;
    while(frase[i] != '\0')
    {
        j++;
        i++;
    }

    printf("Quantidade letras da frase: %d\n", j);

    return 0;
}