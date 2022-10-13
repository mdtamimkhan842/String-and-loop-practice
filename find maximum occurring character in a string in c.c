#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500], ch[20];
    int i, j, k=0;

    gets(arr);
    //magets(ch);
    int length = strlen(arr);

    for (i=0; i<length; i++)
    {
        if (arr[i] == 'e')
        {
            k++;
        }
    }
    printf("The Highest frequency of character %d\n", k);

    return 0;
}
