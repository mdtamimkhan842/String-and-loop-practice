#include <stdio.h>
int main ()
{
int i, j, n;
int ft_mark[100], st_mark[100], final_mark[100];
printf("Enter value:");
scanf("%d", &n);

printf("Enter ft_marks: ");

for (i=0; i<n; i++){
scanf("%d", &ft_mark[i]);
}
printf("Enter st_marks: ");
for (i=0; i<n; i++){
scanf("%d", &st_mark[i]);
}
printf("Enter final_marks: ");
for (i=0; i<n; i++){
scanf("%d", &final_mark[i]);
}
int total_marks[100];

total_marks[i]= ft_mark[i] / 4+ st_mark[i] /4 + final_mark [i] /2;

for (i=1; i<=n; i++){
printf("Roll No: %d\tTotal marks: %d\n", i,total_marks[i-1]);
}

return 0;
}
