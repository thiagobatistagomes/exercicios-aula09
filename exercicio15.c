#include <stdio.h>

/*
    Faça um programa que receba uma frase e mostre a quantidade de palavras digitadas na frase.
*/

int main ()
{
    char frase[100];
    int i, cont;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    //quantidade de palavras presente na frase
    cont = 1;
    for (i = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ' && frase[i + 1] != ' ')
        {
            cont++;
        }
    }

    printf("Numero de palavras: %d", cont);


    return 0;
}