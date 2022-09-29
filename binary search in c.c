#include <stdio.h>
int main ()
{
    int arr[] = {1,2,5,10,15,60,70};
    int item = 5;
    int left, right, middle;

    while (left <=right)
    {

        left = 0;
        right =7;
        middle = (left+right)/2;

        if (arr[middle]== item)
        {
            printf("item found at index is : %d\n", middle);
            break;
        }
        else if (arr[middle] < item)
        {
            left = middle +1;

        }
        else
        {
            right = middle-1;
        }
    }
    printf("item not found\n");

    return 0;
}
