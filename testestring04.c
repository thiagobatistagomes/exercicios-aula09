#include <stdio.h>

int main ()
{
    char x[40];
    int i, espacos = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", x);

    //verificando quantidade de espacos

    i = 0;
    while(x[i] != '\0')
    {
        if(x[i] == ' ')
        {
            espacos++;
        }
        i++;
    }
    printf("Numero de espacos: %d", espacos);

    return 0;
}