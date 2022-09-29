#include <stdio.h>
int main ()
{
    int i, j, k, n;
    scanf("%d", &n);

    for (i=1; i<=n; i++) //
    {
        for (j=1; j<=10; j++)
        {
            if (i%2==0)
            {
            continue;
            }
            k= i*j;
            printf("%d * %d = %d\n",i, j, k);

        }
        printf("\n");
    }
    return 0;
}
