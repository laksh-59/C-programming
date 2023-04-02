#include<stdio.h>
int main()
{
    int i,n;
    printf("eneter number");
    scanf("%d",&n);

    int factorial=1;
    for( i=1;i<=n;i++)
    factorial=factorial*i;
    printf("factorial is %d",factorial);\
 

     return 0;                       
}
