#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[5000];
    int i, j, alphabet =0, digit =0, special =0;

    gets(arr);

    for (i=0; arr[i] != '\0'; i++)
    {

        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
        {
            alphabet++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("%d\n %d\n %d\n", alphabet, digit, special);


    return 0;
}
