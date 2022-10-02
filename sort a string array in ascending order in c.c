#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, j, length;
    char temp;

    printf("Enter the value:");
    gets(arr);

    length = strlen(arr);

    for (i=1; i<length-1; i++)
    {
        for (j=i+1; j<length; j++)
        {
            if (arr[i] > arr[j])
            {
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    printf("after sorting at a string : %s\n", arr);

    return 0;
}
