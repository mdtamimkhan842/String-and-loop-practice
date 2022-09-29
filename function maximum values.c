#include <stdio.h>

int find_max(int arr[], int n){

int i, max = arr[0];

for (i=0; i<n; i++){
if (arr[i]>max){
max = arr[i];
}
}
return max;
}

int main ()
{
int n ,i, j;
scanf("%d", &n);
int arr[n];

for (i=0; i<n; i++){
scanf("%d", &arr[i]);
}
int result = find_max(arr, n);
printf("%d\n", result);

return 0;
}
