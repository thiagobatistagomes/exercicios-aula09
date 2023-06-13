#include <stdio.h>

/*
    Faça um programa que leia 4 números inteiros no formato de string, compute a soma dos números lidos, 
converta o resultado para outra string e mostre a string que contém o resultado.
*/

int main ()
{
    char num1[10], num2[10], num3[10], num4[10], res[10];
    int n1, n2, n3, n4, soma = 0;

    printf("Digite o primeiro numero: ");
    scanf("%s", num1);
    printf("Digite o segundo numero: ");
    scanf("%s", num2);
    printf("Digite o terceiro numero: ");
    scanf("%s", num3);
    printf("Digite o quarto numero: ");
    scanf("%s", num4);

    //convertendo as strings para int

    sscanf(num1, "%d", &n1);
    sscanf(num2, "%d", &n2);
    sscanf(num3, "%d", &n3);
    sscanf(num4, "%d", &n4);

    //computando a soma
    soma = n1 + n2 + n3 + n4;


    //convertendo o resultado para outra string
    sprintf(res, "%d", soma);

    printf("Resultado: %s\n", res);

    return 0;
}