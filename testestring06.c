#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char x[20];
    char y[20];
    int soma = 0;

    printf("Informe os valores: ");
    scanf("%s", x);

    printf("Informe os valores: ");
    scanf("%s", y);

    int num = atoi(x); //convertendo a string em um valor inteiro
    int num2 = atoi(y);

    soma = num + num2;

    printf("%d + %d = %d", num, num2, soma);



    return 0;
}