#include <stdio.h>
int main ()
{
int i, n, k;
int arr[50];

scanf("%d", &n);

for (i=n; i>=0; i--){
scanf("%d", &arr[i]);
}

for (i=n; i>=0; i--){
printf("%d\n", arr[i]);
}

return 0;
}
