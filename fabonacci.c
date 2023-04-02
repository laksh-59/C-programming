#include<stdio.h>
int main()
{
    int fterm=0,sterm=1,tterm;
    int i;
    int num;
    //printf("Enter how many term do you need\n");
    //scanf("%d",&num);
    int snum;
    printf("What num you want to check in series");
    scanf("%d",&snum);
    //printf("0 1 ");
    for(i=3;i<=snum;i++)
    {
        tterm=fterm+sterm;
        //printf("%d ",tterm);
        fterm=sterm;
        sterm=tterm;
        if(tterm==snum)
        {
            break;
        }
    }
    if(i==snum+1)
    {
        printf("the number is not in series");
    }
    else
    {
    printf("the term is %d ",i);

    }
    return 0;
}