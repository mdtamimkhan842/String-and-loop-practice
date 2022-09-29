#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[100], max = 'a';
    int i, count=0;

    gets(arr);

    for (i=0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            if (max[i] > max)
            {
                max = max[i];
            }
        }
    }
    printf("%s\n", max);



    return 0;
}
