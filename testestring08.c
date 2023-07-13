#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno
{
    char nome[10];
    int idade;
    int matricula;
} aluno;

int main ()
{
    aluno alunos[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%s", alunos[i].nome);
    }

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", alunos[i].nome);
    }


    return 0;
}