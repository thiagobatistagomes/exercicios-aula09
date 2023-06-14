#include <stdio.h>
#include <string.h>

/*
    Desafio Difícil) Alice criou uma string S apenas com letras minúsculas do alfabeto. A partir de S, ela 
    definiu uma string S’ removendo todas as letras “a” de S, e mantendo as demais letras na ordem em que 
    aparecem. Então, Alice formou uma nova string T concatenando as strings S e S’, isto é: T = S + S’. Por 
    exemplo:
    S = “abacaxi” 
    S’ = “bcxi”
    T = “abacaxibcxi”
    Dada como entrada a string T, sua tarefa é encontrar a string S que Alice usou para produzir T. Considere 
    que não haverão espaços na string de entrada. Além disso, a string de entrada pode conter entre 1 até 10^5 
    caracteres. Caso não exista uma resposta para a entrada fornecida, imprima –1.
*/

int main()
{
    char T[100000], S[100000], Saux[100000], SLinhaaux[100000], SLinha[100000];
    int i, j, k;

    scanf("%[^\n]", T);

    // Identificando S' auxiliar (SLinha repetido 2x)

    j = 0;
    for (i = 0; T[i] != '\0'; i++)
    {
        if (T[i] != 'a')
        {
            SLinhaaux[j] = T[i];
            j++;
        }
    }

    SLinhaaux[j] = '\0'; // Adicionando o terminador de string em SLinha

    // Corrigindo SLinha

    k = 0;
    for (i = 0; i < (strlen(SLinhaaux) / 2); i++)
    {
        SLinha[k] = SLinhaaux[i];
        k++;
    }

    SLinha[k] = '\0'; // Adicionando o terminador de string

    // Identificando S

    int tLength = strlen(T);
    int sLinhaLength = strlen(SLinha);
    int sLength = tLength - sLinhaLength;

    for (i = 0; i < sLength; i++)
    {
        Saux[i] = T[i];
    }
    Saux[sLength] = '\0'; // Adicionando o terminador de string em Saux

    // adicionar elementos de Saux em S

    for(i = 0; i <sLength; i++)
    {
        S[i] = Saux[i];
    }

    S[sLength] = '\0';


    //verificar se existe resposta
    strcat(Saux, SLinha);
    if(strcmp(Saux, T) == 0)
    {
        printf("%s", S);
    }
    else
    {
        printf("-1");
    }
    

    return 0;
}