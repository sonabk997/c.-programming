#include<stdio.h>
void main()
{
int a,b,ch;
printf("enter the values of a,b");
scanf("%d %5d",&a,&b);
printf("1.add");
printf("2.sub");
printf("3.mul");
printf("4.div");
printf("enter your ch");
scanf("%d",&ch);
switch(ch)
{
case1:
printf("%d",a+b);
break;
case2:
printf("%d",a-b);
break;
case3:
printf("%d",a*b);
break;
case4:
printf("%d",a/b);
break;
default:
printf("nothing");
}
}
