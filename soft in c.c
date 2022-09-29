#include <stdio.h>
int main ()
{
    int arr[] = {50,55,22,11,32,56,32,59,88,96,36,42,26,45};
    int i, j, size = 100;

    for (i=0; i<size; i++)
    {
        for (j=0; j<size; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
