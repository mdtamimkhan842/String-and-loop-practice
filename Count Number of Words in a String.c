#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[5000];
    int i, length, count=0;

    gets(arr);

    for (i=0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ' && arr[i+1] != ' ')
        {
            count++;
        }
    }
    printf("%d\n", count+1);

    return 0;
}
