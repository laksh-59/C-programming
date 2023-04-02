#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=5;a>1;a--)
    {
     for(b=6-a;b<=5;b++)
     {c=a+b;
        printf("\n %d %d %d",a,b,c);
     }
    }

    
    return 0;
}