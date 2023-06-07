#include <stdio.h>
#include <string.h>

/*
    Faça um programa que leia uma frase F e dois inteiros I e J. A seguir, imprima os caracteres das posições 
que vão de I até J, inclusive.
*/

int main ()
{
    char F[100];
    int I, J, k, tamanho;

    printf("Digite uma frase: \n");
    scanf(" %[^\n]", F);

    printf("Digite as posicoes que deseja imprimir: \n");
    scanf("%d %d", &I, &J);

    //verificando se os valores de I e J estao dentro dos limites da frase
    tamanho = strlen(F);

    if(I < 0 || I >= tamanho || J < 0 || J >= tamanho|| I > J)
    {
        printf("Posicoes invalidas");
        return 0;
    }

    for(k = I; k <= J; k++)
    {
        printf("%c", F[k]);
    }




    return 0;
}