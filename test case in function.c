#include <stdio.h>
int test (int x){
int y= x;
x= 2 * y;
return (x * y);
}

int main ()
{
int x=20;
int y= 10;
int z = 25;


z= test(x);

printf("%d %d %d\n", x, y, z);
}
