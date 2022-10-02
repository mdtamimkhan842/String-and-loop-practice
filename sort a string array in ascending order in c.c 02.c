#include <stdio.h>
#include <string.h>

int main ()
{
    char string[500];
    char temp;
    gets(string);
    int i, j;
    int n = strlen(string);//10

    //printf("String before sorting - %s \n", string);

    for (i = 0; i < n-1; i++)//0-8
    {
        for (j = i+1; j < n; j++)//1-9
        {
            if (string[i] > string[j])//66//65
            {
                temp = string[i];//66
                string[i] = string[j];//65
                string[j] = temp;//66
            }
        }
    }

    printf("String after sorting   %s \n", string);
    return 0;
}
