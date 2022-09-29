#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[1000], word;
    int i, j, is_word_started =0, length;

    gets(arr);

    length = strlen(arr);

    for (i=0; i<length; i++)
    {
        if (is_word_started == 0)
        {
            is_word_started =1;

            if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                word = 'A'+ arr[i] - 'a';
                printf("%c", word);
            }
            else
            {
                printf("%c", arr[i]);
            }
        }
        else if ((arr[i] >= 'A' && arr[i] <='Z') || (arr[i] >= '0' && arr[i] <= '9'))
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;

            }
            printf("%c", arr[i]);
        }
        else
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
                printf("\n");
            }
        }

    }
    printf("\n");

    return 0;
}
