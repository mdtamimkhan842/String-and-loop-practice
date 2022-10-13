#include <stdio.h>
int main ()
{
    int i, n;

    scanf("%d", &n);//10

    for (i=2; i<n; i++)
    {
        if (n%i == 0)
        {
            break;
        }
    }
    if (n==i)
    {
        printf("This is prime number");
    }
    else
    {
        printf("This is not prime number");
    }
}






/*if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i]-32;
        }
        if (arr[i] == ' ' && arr[i] != '0')
        {
            if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                arr[i] = arr[i]-32;
            }
        }

    }//
