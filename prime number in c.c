#include <stdio.h>
int main ()
{
    int n, i, j, c=0;

    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        c++;
    }
    for (i=2; i<=n; i++)
    {
        if (n%i==0)
            c++;
        break;
    }
    if (c==1)
    {
        printf("prime number is not : %d\n", n);
    }
    else
    {
        printf("prime number is : %d\n", n);
    }



    return 0;
}
