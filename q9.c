#include<stdio.h>
int main()
{
    char x;
    printf("enter a number");
    scanf("%c",&x);
    if (x>='A'&&x<='Z')
    printf("uppercase alphabet");
    else if (x>='a'&&x<='z')
    printf("lowercse alphabet");
    else if (x>='0'&&x<='9')
    printf("digit alphabet");
    else
    printf("special character");

    
        return 0;
}