#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, length;

    gets(arr);

    length = strlen(arr);

    for (i=0; i<length; i++)
    {

        printf("%c ", arr[i]);

    }

    return 0;
}
