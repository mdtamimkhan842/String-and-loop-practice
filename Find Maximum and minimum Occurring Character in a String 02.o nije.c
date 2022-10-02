#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, j, length, max, min;
    char minchar=0, maxChar=0;
    length = strlen(arr);
    int freq[length];
    gets(arr);

    for (i=0; i<length; i++)
    {
        freq[i] = 1;
        for (j=i+1; j<length; j++)
        {
            if (arr[i] == arr[j] && arr[i] != ' ' && arr[i] != '0')
            {

                freq[i]++;
                //arr[j] = '0';
            }
        }
    }
    max = min = freq[0];
    for (i=0; i<length; i++)
    {
        if (min>freq[i] && freq[i] != '0')
        {
            min=freq[i];
            minchar=arr[i];
        }
        if (max < freq[i])
        {
            max = freq[i];
            maxChar = arr[i];
        }

    }
    printf("minimum accurring in a string : %c\n", minchar);
    printf("Maximum accurring in a string : %c\n", maxChar);
    printf("minimum accurring in a string : %d\n", min);
    printf("Maximum accurring in a string : %d\n", max);

    return 0;
}
