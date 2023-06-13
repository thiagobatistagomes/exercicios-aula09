#include <stdio.h>

/*
    Modifique  o  programa  anterior  para  contar  a  quantidade  de  cada  vogal.  Siga  o  formato  de  saída apresentado no exemplo do Moodle.
*/

int main ()
{
    char frase[40];
    int vogalA, vogalE, vogalI, vogalO, vogalU, i;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    i = 0;
    vogalA = 0;
    vogalE = 0;
    vogalI = 0;
    vogalO = 0;
    vogalU = 0;
    while(frase[i] != '\0')
    {
        if(frase[i] == 'a')
        {
            vogalA++;
        }
        else if(frase[i] == 'e')
        {
            vogalE++;
        }
        else if(frase[i] == 'i')
        {
            vogalI++;
        }
        else if(frase[i] == 'o')
        {
            vogalO++;
        }
        else if(frase[i] == 'u')
        {
            vogalU++;
        }
        i++;
    }

    printf("Quantidade de cada vogal => A:%d E:%d I:%d O:%d U:%d\n", vogalA, vogalE, vogalI, vogalO, vogalU);





    return 0;
}