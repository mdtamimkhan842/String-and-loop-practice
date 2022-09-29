#include <stdio.h>
int main ()
{
    char arr1[100], arr2[100];

    int i, j;

    printf("Enter two string:");
    scanf("%s %s", &arr1, &arr2);

    for (i=0; arr1[i] != '\0'; i++)
    {
    }
    printf("%d\n", i);

    for (j=0; arr2[j] != '\0'; j++)
    {
    }
    printf("%d\n", j);

    if (i==j)
    {
        printf("string are equal");
    }
    else
    {
        printf("string are not equal");
    }


    return 0;
}
