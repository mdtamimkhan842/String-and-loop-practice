#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[100];
    int i, j, vowel =0, consonant =0;

    gets(arr);

    for (i=0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i]=='u')
        {
            vowel++;
        }

        else
        {
            consonant++;
        }

    }
    printf("The total number of vowel in the string is : %d\n", vowel);

    printf("The total number of consonant in the string is : %d\n", consonant);


    return 0;
}
