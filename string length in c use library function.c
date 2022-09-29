#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    gets(a);

    printf("Length of string a = %zu \n",strlen(a));

    return 0;
}
