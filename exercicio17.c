#include <stdio.h>
#include <ctype.h>

/*
    Faça um programa que receba uma frase e mostre a quantidade de letras minúsculas e de letras 
maiúsculas digitadas. Imprima os dois valores em uma linha, separados por um único espaço.
*/

int main ()
{
    char frase[100];
    int i, qtdmaiuscula = 0, qtdminuscula = 0;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    for(i = 0; frase[i] != '\0'; i++)
    {
        if(isupper(frase[i]))
        {
            qtdmaiuscula++;
        }
        else if(islower(frase[i]))
        {
            qtdminuscula++;
        }
    }

    printf("Quantidade de maiusculas: %d\n", qtdmaiuscula);
    printf("Quantidade de minusculas: %d\n", qtdminuscula);

    return 0;
}