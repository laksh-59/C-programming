#include<stdio.h>
int main()
{
    int x;
    printf("eneter a number");
    scanf("%d",&x);
    if (x%7==0 || x%3==0)
    printf("divisible");
    else
    printf("not divisible");

    return 0;
}