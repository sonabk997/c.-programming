#include <stdio.h>
int main()
{
int temp,a,b;
printf("enter the values of a,b");
scanf("%d" "%d", &a,&b);
printf("privious values of a and b=%d,%d\n",a,b);
temp=a;
a=b;
b=temp; 
printf("values of a and b=%d,%d\n",a,b);
}

