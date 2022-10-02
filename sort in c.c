#include <stdio.h>
//#include <string.h>

int main()
{

    int arr[500];
    int temp;
    int i, n;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //int length = strlen(arr);



    for (int i = 1; i <=n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if(arr[i] > arr[j])//2 3 1 8 2
            {
                temp = arr[i];//3
                arr[i] = arr[j];//1
                arr[j] = temp;//3
            }
        }
    }

    for (i = 1; i <=n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
