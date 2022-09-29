#include <stdio.h>
double find_area(double r){
double pi=3.1416;
double A = pi*r*r;
return A;
}

int main ()
{
double r;
scanf("%lf", &r);
double pi=3.1416;
double result = find_area(r);
printf("%0.02lf\n", result);
return 0;
}
