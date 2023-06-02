#include <stdio.h>

int main ()
{
    char x[20];

    printf("Digite a frase: ");
    scanf("%[^\n]", x);

    printf("Frase digitada: %s", x);


    return 0;
}