#include <stdio.h>
int main ()
{
    int i, j;
    char arr1[50], arr2[50];
    printf("\n Enter two array: ");

    gets(arr1);
    gets(arr2);
    i=0;
    while (arr1[i]==arr2[i] && arr1[i]!= '\0')

        i++;
        if (arr1[i]<arr2[i])

            printf("arr1[i]<arr2[i]");

        else if (arr1[i]>arr2[i])

            printf("arr1[i]>arr2[i]");

        else

            printf("arr1[i]=arr2[i]");




    return 0;
}
