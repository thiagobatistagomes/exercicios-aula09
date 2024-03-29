#include <stdio.h>
#include <string.h>

/*
    Desafio Fácil) Alice gosta muito da letra A. Alice classifica como string harmônica todas as strings 
onde mais da metade dos caracteres são A. Por exemplo: “aaabb” e “abaa” são strings harmônicas; porém, 
“xaya” e “abbba” não são. Dada uma string qualquer (sem espaços), Alice quer apagar algumas de suas 
letras para torná-la harmônica. Alice pediu a sua ajuda para escrever um programa que informe qual o maior 
tamanho da string resultante após ela apagar algumas de suas letras, para torná-la harmônica. Considere que 
a entrada conterá somente letras minúsculas e haverá ao menos um caractere “a”, de forma que sempre 
existe uma resposta.
Exemplo de Entrada: aaxaaa  Saída: 6 (nesse caso, não é necessário apagar nenhuma letra, 
pois a string de entrada já é harmônica. Portanto, seu tamanho final é 6 caracteres.)
Exemplo de Entrada: babbbba  Saída: 3 (nesse caso, é preciso apagar 4 letras b para tornar a 
string harmônica. Dessa forma, a string final fica com apenas 3 caracteres.)
*/

int main()
{
    char entrada[100];
    int contador = 0, i;
    int jaeharmonica, seraharmonica;

    scanf("%s", entrada);

    int len = strlen(entrada);


    // Contando o número de ocorrências do caractere 'a'
    for (i = 0; i < len; i++)
    {
        if (entrada[i] == 'a')
        {
            contador++;
        }
    }

    jaeharmonica = len;

    // Verificando se a string já é harmônica
    if (contador > len / 2)
    {
        printf("%d", jaeharmonica);
    }
    else
    {
        // Encontrando o maior tamanho possível para tornar a string harmônica
        seraharmonica = contador * 2 - 1;
        printf("%d", seraharmonica);
    }
    return 0;
}