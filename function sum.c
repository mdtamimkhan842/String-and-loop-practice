#include <stdio.h>

int add(int n1, int n2){
int sum = n1+n2;
return sum;
}
int main ()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int result = add(n1, n2);
    printf("%d\n", result);
    return 0;
}
