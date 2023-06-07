#include <stdio.h>
#include <string.h>

/*
    Leia duas frases e mostre a diferença de tamanho entre elas. Sua saída deve estar no padrão: “A frase 1 
possui X caracteres a mais/menos que a frase 2.”
*/

int main ()
{
    char frase1[100];
    char frase2[100];
    int tam1, tam2, diferenca;

    printf("Digite a primeira frase: \n");
    scanf(" %[^\n]", frase1);
    //getchar(); pode ser usado no lugar do espaco antes de %[^\n] no scanf
    //sem o espaco ou o getchar o programa ira ler apenas a primeira frase

    tam1 = strlen(frase1);

    printf("Digite a segunda frase: \n");
    scanf(" %[^\n]", frase2);
    //getchar(); pode ser usado no lugar do espaco antes de %[^\n] no scanf

    tam2 = strlen(frase2);

    if(tam1 > tam2)
    {
        diferenca = tam1 - tam2;
        printf("A frase 1 possui %d caracteres a mais que a frase 2\n", diferenca);
    }
    else if(tam2 > tam1)
    {
        diferenca = tam2 - tam1;
        printf("A frase 1 possui %d caracteres a menos que a frase 2\n", diferenca);
    }
    else
    {
        printf("As duas frases possuem tamanhos iguais\n");
    }

    return 0;
}