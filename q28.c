#include <stdio.h>
int main()
{
float d;
printf("enter value of d");
scanf("%f",&d);
if (d>=0)
printf("real and equal roots");
else if (d>0)
printf("real roots");
else
printf("imaginary roots");

    return 0;
}