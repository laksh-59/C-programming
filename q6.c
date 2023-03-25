/*

*/
#include<stdio.h>
#include<string.h>


int main()
{
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    {
        printf("it is uppercase");

    }
   else if(c>=33&&c<=47)
    {
        printf("it is special");

    }
    else if(c>=97&&c<=122)
    {
        printf("it is lowercase");

    }
    else if(c>48&&c<=57)
    {
        printf("it is a digit");
    }
    else
    printf("wrong input");
    return 0;
}
