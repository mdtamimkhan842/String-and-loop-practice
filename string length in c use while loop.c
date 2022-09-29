#include <stdio.h>
int main ()
{
int i, n;
char name[100];
//scanf("%s", &name[i]);
gets(name);

i=0;
while(name[i]=! '\0'){
i++;
}
printf("string length is: %d\n", i);


return 0;
}
