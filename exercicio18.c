#include <stdio.h>
#include <string.h>

/*
    Faça um programa que receba duas palavras e as concatene em uma única frase, onde as duas palavras 
são separadas por espaço.
*/

int main ()
{
    char palavra1[20], palavra2[20];

    printf("Digite a primeira palavra: \n");
    scanf(" %s", palavra1);

    printf("Digite a segunda palavra: \n");
    scanf(" %s", palavra2);

    strcat(palavra1, " ");
    strcat(palavra1, palavra2);

    printf("Concatenacao: %s", palavra1);

    return 0;
}