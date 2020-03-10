#include <stdio.h>
int main()
{
int a,b,ch;
printf("enter a&b value");
scanf("%d %d", &a, &b);
printf("enter your choice");
scanf("%d", &choice);
switch(choice)
{
case 1 '+':printf("sum of a & b=%d",a+b);
case 2 '-':printf("substract of a & b=%d",a-b);
default:printf("invalid operator");
}
}

