#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500]= "amar sonar bangla ami tomay valobashi";

//gets(arr);

    int base, address;

    address = (int) strchr (arr, 'a');
    base = (int) (arr);

    if (address == 0)
        printf("Not found!");
    else
        printf("Found at position %d ", address-base+1);

    return 0;
}
