#include <stdio.h>
#include <string.h>
int main()
    {
        char str1[50]; // size of char string
        printf (" Enter the string: ");
        gets(str1); // use gets() function to take string

        printf (" \n Before reversing the string: %s \n", str1);

        // call revstr() function
        revstr(str1);
        printf (" After reversing the string: %s", str1);
    }

