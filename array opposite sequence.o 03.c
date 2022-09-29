#include <stdio.h>
int main (){
int arr[] = {10,20,30,40,50,60,70,80,90,100};
int arr2[10];
int i, j, temp;

for (i=0, j=9; i<10; i++, j--){
temp=arr[j];// 9 8 7 6 5 4 3 2 1
arr[j]=arr[i];// 1 2 3 4 5 6 7 8 9
arr[i]=temp;//9 8 7 6 5 4 3 2 1
}

for (i=0; i<10; i++){
printf("%d\n", arr[i]);
}



return 0;
}
