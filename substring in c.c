#include <stdio.h>
#include <string.h>
int main ()
{
    char arr1[500], arr2[500];
    int i, j, length1, length2, count=0;

    gets(arr1);//amar sonar bangla ami tomay valobashi

    gets(arr2);//ami

    length1=strlen(arr1);//40
    length2=strlen(arr2);//25

    for (i=0; i<length1; i++)//0
    {
        for (j=0; j<length2; j++)//0,1,2
        {
            if (arr1[i] == ' ' && arr1[i] != '0')
            {
                count++;
            }
            if (arr1[i+j] != arr2[j])//
            {
                break;
            }
        }
        if (length2 == j)
        {
            printf("sub string found at index number %d\n", i+1);
        }
    }
    printf("sub string not found");
    printf("number of index %d\n", count+1);

    return 0;
}
