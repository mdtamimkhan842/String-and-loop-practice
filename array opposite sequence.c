#include <stdio.h>
int main ()
{
int n;
scanf("%d", &n);
int arr[n], arr2[n], i, j;


for (i=0; i<n; i++){
scanf("%d", &arr[i]);
}

for (i=0, i<n; j=n-1; i++, j--)
{
arr2[j]=arr[i];  //0 1 2 3 4 5 6
}

for (i=1; i<n; i++){
arr[i]=arr2[i];
}//1 2 3 4 5 6

for (i=0; i<n; i++){
printf("%d\n", arr[i]);
}


return 0;
}
