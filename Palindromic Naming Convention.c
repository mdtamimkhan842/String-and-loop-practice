#include <stdio.h>
#include <string.h>
int main ()
{
    char S[500];
    int T, i, j, length;

    gets(S);
    length = strlen(S);
    scanf("%d", &T);

    for (i=1; i<=10; i++)
    {
        for (j=0; j<length; j++)
        {
            if (S[i]== S[length-i-1]) //0==5-0-1, 1==5-1-1,2==5-2-1//madam//d
            {
                c++;
            }
        }

    }

    return 0;
}
