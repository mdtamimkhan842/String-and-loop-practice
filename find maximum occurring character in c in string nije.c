#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, j, count=0, maxcount =0, length;
    char maxchar;

    printf("Enter the value:");
    gets(arr);
    length = strlen(arr);

    for (i=0; i<length; i++)
    {
        count =0;
        for (j=i+1; j<length; j++)
        {
            if (arr[i]==arr[j] && arr[i] != '0' && arr[i] != ' '){
                count++;
        }
        }
    }
    if (maxcount < count)
    {
        maxcount = count;
        maxchar = arr[i];
    }
    printf("Maximum occurring value: %c\n", maxchar);

    return 0;
}
