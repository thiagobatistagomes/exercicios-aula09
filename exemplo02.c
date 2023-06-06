#include <stdio.h>
#include <ctype.h>

int main ()
{
    char c = 'A', d = 'a';
    char s[20] = "Unifei";
    int i;

    printf("%d\n", isupper(d));

    i = 0;
    while(s[i] != '\0')
    {
        s[i] = tolower(s[i]);
        i++;
    }

    printf("%s\n", s);

    return 0;
}