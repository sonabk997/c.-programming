#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the value of a,b");
scanf("%d""%d",&a,&b);
printf("previous values of a and b=%d %d\n", a,b);
temp=a;
a=b;
b=temp;
printf("values of a and b=%d %d\n",a,b);
}



