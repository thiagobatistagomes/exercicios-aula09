#include <stdio.h>
#include <ctype.h> //biblioteca para usar a funcao isspace()

int main ()
{
    char x[40];
    int i, espacos = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", x);

    i = 0;
    while(x[i] != '\0')
    {
        if(isspace(x[i]))
        {
            espacos++;
        }
        i++;
    }

    printf("Quantidade de espacos: %d", espacos);

    return 0;
}