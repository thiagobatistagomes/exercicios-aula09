#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia 4 números inteiros no formato de string, compute a soma dos números lidos 
e mostre o resultado obtido.
*/

int main ()
{
    char num1[10], num2[10], num3[10], num4[10];
    int n1, n2, n3, n4, soma = 0;

    scanf("%9s %9s %9s %9s", num1, num2, num3, num4);

    sscanf(num1, "%d", &n1);

    sscanf(num2, "%d", &n2);

    n3 = atoi(num3);

    n4 = atoi(num4);

    soma = n1 + n2 + n3 + n4;

    printf("Soma: %d", soma);

    return 0;
}