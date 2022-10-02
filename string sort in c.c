#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, j, length, temp;

    gets(arr);

    length = strlen(arr);

    for (i=0; i<length; i++)
    {
        for (j=i+1; j<length; j++)
        {
            //if ((arr[i] >='a' && arr[i]<='z') &&(arr[i] >= 'A' && arr[i] <='Z') && (arr[i] >= '0' && arr[i] <= '9'))

            if (arr[i] > arr[j])
            {
                temp= arr[i];
                arr[i] = arr[j];
                arr[j]=temp;

            }
        }
    }

    printf("%s", arr);


    return 0;
}
