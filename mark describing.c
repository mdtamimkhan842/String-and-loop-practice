#include <stdio.h>
int main ()
{
int i, j, n, count=0, marks;
int total_mark[100];

scanf("%d", &n);

for (i=0; i<n; i++){
scanf("%d", &total_mark[i]);
}

for (marks=50; marks<=100; marks++){
    for (i=0; i<n; i++){
        if (total_mark[i]==marks)
            count++;
    }
    printf("marks: %d count: %d\n",marks, count);
}





return 0;
}
