#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia uma frase (string) contendo 4 valores numéricos reais de precisão dupla 
    (double), separados por espaços. A seguir, seu programa deve separar cada número dos demais, convertê-lo 
    para o formato numérico e exibir a soma dos números.
    Exemplo de Saída:  3.14 + 2.71 + 12 + 71 = 88.850000
*/

int main ()
{
    char frase[100];
    double n1, n2, n3, n4;

    printf("Digite os numeros: \n");
    scanf("%[^\n]", frase);

    // Usando sscanf para separar os números e convertê-los para double
    sscanf(frase, "%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    // Calculando a soma dos números
    double soma = n1 + n2 + n3 + n4;

    // Imprimindo o resultado
    printf("%.6lf + %.6lf + %.6lf + %.6lf = %.6lf\n", n1, n2, n3, n4, soma);

    return 0;
}