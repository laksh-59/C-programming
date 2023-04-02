#include<stdio.h>
int main()
{
    int costprice,sellingprice;
    printf("enter costprice and sellingprice");
    scanf("%d %d",&costprice,&sellingprice);
    if(costprice>sellingprice)
    
         {printf("loss=%d",costprice-sellingprice);}
         else if (sellingprice>costprice)
        { printf("profit=%d",sellingprice-costprice);}
         else
        { printf("no profit and no loss");}
    
    return 0;
    
    
   
}