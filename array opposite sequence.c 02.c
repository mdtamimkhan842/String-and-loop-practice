#include <stdio.h>
int main ()
{
int arr[10] = {10, 20, 30, 40, 50, 55, 60, 44 90, 43};
int arr2[10];
int i, j;

for (i=0, j=9; i<10; i++, j--){
arr2[j]=arr[i];// 1 2 3 4 5 6 7 8 9
}

for (i=0; i<10; i++){
arr[i]=arr2[i];//1 2 3 4 5 6 7 8 9
}
for (i=0; i<10; i++){
printf("%d\n", arr[i]);
}

return 0;
}
