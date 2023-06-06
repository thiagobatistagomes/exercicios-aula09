#include <stdio.h>
#include <string.h>

/*
    Faça um programa que leia uma frase e a copie para outro vetor, removendo os espaços em branco. 
Imprima o segundo vetor.
*/

int main ()
{
    char frase[60];
    char copia[60];
    int i, tam = 0;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] != ' ')
        {
            copia[tam] = frase[i];
            tam++;
        }
    }

    copia[tam] = '\0'; // adiciona o caractere nulo ao final da copia para formar uma string valida

    printf("Copia: %s", copia);

    return 0;
}