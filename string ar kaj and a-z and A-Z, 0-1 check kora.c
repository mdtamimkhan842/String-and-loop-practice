#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[1000], word[100];

    gets(arr);
    int length, i, j, is_word_statred=0;

    length = strlen(arr);

    for (i=0, j=0; i<length; i++)
    {
        if (arr[i] >='a' && arr[i]<='z')
        {
            if (is_word_statred==0)
            {
                is_word_statred = 1;
                word[j]= 'A'+arr[i]-'a';//first character is capital
                j++;
            }
            else
            {
                word[j] = arr[i];
                j++;
            }
        }
        else if (arr[i] >='A' && arr[i]<='Z')
        {
            if (is_word_statred ==0)
            {
                is_word_statred = 1;
            }
            word[j]= arr[i];
            j++;
        }
        else if (arr[i] >='0' && arr[i]<='9')
        {
            if (is_word_statred ==0)
            {
                is_word_statred = 1;
            }
            word[j]= arr[i];
            j++;
        }
        else
        {
            if (is_word_statred == 1)
            {
                is_word_statred = 0;
                word[j] = '\0';
                printf("%s\n", word);
                j=0;
            }
        }
    }

    return 0;
}
