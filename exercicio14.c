#include <stdio.h>

/*
    Faça um programa que leia um número inteiro longo representando o CPF de uma pessoa e, a seguir, mostre o número de vezes que cada dígito aparece no CPF. Siga o formato de saída apresentado no exemplo do Moodle.
*/

int main()
{
    char cpf[12];
    int i, cont[10] = {0};

    printf("Digite o CPF (somente números): ");
    scanf("%s", cpf);

    for (i = 0; cpf[i] != '\0'; i++)
    {
        int digito;
        sscanf(&cpf[i], "%1d", &digito);
        cont[digito]++;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d = %d\n", i, cont[i]);
    }

    return 0;
}