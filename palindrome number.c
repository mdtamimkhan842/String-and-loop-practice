#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, count=0, length;

    gets(arr);
    length = strlen(arr);
    for (i=0 ; i<length/2; i++)
    {
        if (arr[i] == arr[length-i-1])//5-0-1//madam//madam
        {
            count++;
        }
    }
    if (i == count)//i=0, c=0, i=1, c=1
    {
        printf("string is palindrome number");
    }
    else
    {
        printf("Is not palindrome number");
    }

    return 0;
}
