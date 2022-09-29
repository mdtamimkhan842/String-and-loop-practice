#include<stdio.h>
int main ()
{
    int  st_marks, n,i, second_marks, half_exam_marks;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("1st_Exam_Marks:");
        scanf("%d", &st_marks);

        printf("second_exam_marks:");
        scanf("%d", &second_marks);

        printf("half_exam_marks:");
        scanf("%d", half_exam_marks);

        int final_marks= half_exam_marks/2 + second_marks/4 + st_marks/4;

        printf("%d\n", final_marks);
    }

    return 0;
}
