#include<stdio.h>
int main()
{
    int a,b,c;
    printf("eneter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b&&a>=c)
    printf("a is the greatest");
    if (b>=a&&b>=c)
    printf("b is the greatest");
    if (c>=a&&c>=b);
    printf("c is the greatest");
    

    
    return 0;
}

