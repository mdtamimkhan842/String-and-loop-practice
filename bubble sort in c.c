#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, j, n, temp;

    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%s", &arr[i]);
    }

//for (i=0; i<=n; i++){
//fgets(arr[i], sizeof arr, arr);
//}

    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%s", arr[i]);
    }


    return 0;
}
