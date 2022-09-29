#include <stdio.h>
int main ()
{
    int a,b, sum1=0, sum2=0, sum, n, k, i, j, m,q,u;
    n=3;
    q=5;
    for (i=1; i<1000; i++)
    {
        for (j=1; j<=333; j++)
        {
            k= n*j;
            sum1= sum1+k;
            for (u=1; u<200; u++)
            {

                m = q*u;
                sum2= sum2+m;
                //printf("%d\n", sum2);
                sum = sum1+sum2;

            }
        }
    }
    printf("%d\n", sum);

    return 0;
}
