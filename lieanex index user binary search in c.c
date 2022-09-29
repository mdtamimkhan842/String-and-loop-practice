#include <stdio.h>
int main ()
{
int arr[] = { 3,5,7,90,44,55,20};
int item = 100;
int i;
for (i=0; i<7; i++){
if (item == arr[i]){
printf("item found at index: %d\n", i);
return 0;
}
}
printf("item is not found");


return 0;
}
