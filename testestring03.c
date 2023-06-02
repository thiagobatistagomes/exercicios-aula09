#include <stdio.h>

int main ()
{
    char x[20];
    int i;

    printf("Digite uma frase: ");
    scanf("%[^\n]", x);

    //verificar vogais e atribuir valores a elas
    
    i = 0;
    while(x[i] != '\0')
    {
        if(x[i] == 'a')
        {
            printf("1");
        }
        else if(x[i] == 'e')
        {
            printf("2");
        }
        else if(x[i] == 'i')
        {
            printf("3");
        }
        else if(x[i] == 'o')
        {
            printf("4");
        }
        else if(x[i] == 'u')
        {
            printf("5");
        }
        else
        {
            printf("%c", x);
        }
        i++;
    }
    printf("\n");

    return 0;
}