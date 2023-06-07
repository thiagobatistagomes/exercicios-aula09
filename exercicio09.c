#include <stdio.h>
#include <string.h>

/*
    Faça um programa que leia uma frase F, um caractere C e um inteiro I. Seu programa deve devolver o 
índice da primeira posição da string onde foi encontrado o caractere C, sendo que a procura começa a partir 
da posição I. Caso o caractere buscado não exista, imprima –1.
*/

int main ()
{
    char F[100];
    char C;
    int I, k;

    printf("Digite uma frase: \n");
    scanf(" %[^\n]", F);

    printf("Digite o caractere que deseja encontrar: \n");
    scanf(" %c", &C);

    printf("Digite a posicao inicial de procura: \n");
    scanf("%d", &I);

    //procurando o caractere inserido

    for(k = I; k < strlen(F); k++)
    {
        if(F[k] == C)
        {
            printf("O caractere foi encontrado na posicao: %d\n", k);
            break;
        }
        else if(k == strlen(F) - 1)
        {
            printf("-1\n");
        }
    }

    return 0;
}