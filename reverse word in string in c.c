#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];

    int i,j,length, temp;

    gets(arr);
    length = strlen(arr);
    for (i=0; i<length/2; i++)
    {
        temp = arr[i];//
        arr[i] = arr[length - i - 1];//10-0-1
        arr[length - i - 1] = temp;
    }
    printf("%s", arr);




    return 0;
}
