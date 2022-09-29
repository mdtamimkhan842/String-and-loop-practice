#include <stdio.h>
int find_ave(int arr[], int n)
{
    int i, sum = 0, ave;;

    for (i=0; i<n; i++)
    {
        sum = sum+arr[i];
        ave = sum/n;
    }
    return ave;
}

int main ()
{
    int n, i, sum = 0, ave;
    scanf("%d", &n);
    int arr[n];

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = find_ave(arr, n);

    printf("%d\n", result);

    return 0;
}
