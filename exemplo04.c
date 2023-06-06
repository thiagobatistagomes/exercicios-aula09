#include <stdio.h>
#include <string.h>

int main ()
{
    //strlen: tamanho da string
    char a [50] = "UNIFEI";
    int tam, i;

    tam = strlen(a);
    printf("Tamanho = %d\n", tam);

    for(i = 0; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }

    printf("\n");

    //strcmp: compara 2 strings
    // se forem iguais, retorna  zero
    char s1[20] = "UNIFEI";
    char s2[20] = "Unifei";

    if(strcmp(s1, s2) == 0)
    {
        printf("Sao iguais\n");
    }
    else
    {
        printf("Sao diferentes\n");
    }

    //strcpy: copia uma string em outra
    char t1[30] = "Unifei";
    char t2[30];

    //t2 = t1 nao funciona
    strcpy(t2, t1);
    printf("Copia = %s\n", t2);

    //strcat: concatena strings
    char q1[50] = "Universidade";
    char q2[50] = "Federal";
    char q3[50] = "de";
    char q4[50] = "Itajuba";

    strcat(q1, " ");
    strcat(q1, q2);
    strcat(q1, " ");
    strcat(q1, q3);
    strcat(q1, " ");
    strcat(q1, q4);

    printf("Concatenacao: %s\n", q1);


    return 0;
}