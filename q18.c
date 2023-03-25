#include<stdio.h>
int main()
{
    int n=5, i=1;
    printf("eneter a number");
    scanf("%d",&n);
    while (i<=n)
    {printf("%d",2*n+1-2*i);
    i++;}
    return 0;
} 