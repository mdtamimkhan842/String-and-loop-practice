#include <stdio.h>
#include <string.h>

int main ()
{
    char arr1[500], arr2[500];
    int i, j;

    gets(arr1);
    gets(arr2);

    for (i=0; arr1[i] != '\0'; i++)
    {
        arr1[i] = arr2[i];
    }
    arr2[i] != '\0';


    printf("The First string is : %s\n", arr1);
    printf("The Second string is : %s\n", arr2);
    printf("Number of characters copied :%d\n", i);



    return 0;
}
