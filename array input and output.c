#include <stdio.h>
int main ()
{
int i, n, k;
int arr[50];

scanf("%d", &n);

for (i=1; i<=n; i++){
scanf("%d", &arr[i]);
}

for (i=1; i<=n; i++){
printf("%d\n", arr[i]);
}

return 0;
}
