#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the value of coefficient",a,b,c);
    scanf("%f $f %f",&a,&b,&c);
    float discriminant;
    discriminant=b*b-4*a*c;
    float root1,root2;
    if(discriminant>0)
    {root1=-b+sqrt(discriminant); 
    root2=-b-sqrt(discriminant);
    printf("the roots of the equation are:%f %f ",root1,root2);}
    else if(discriminant==0){
    root1=-b/(2*a);
    root2=-b/(2*a);
    printf("the roots of the equation are equal having the value=%f %f",root1,root2);
    }
    else
    printf("the roots of the equation are immaginary and hence we cannot compute them");




    return 0;
}