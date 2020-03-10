#include <stdio.h>
void main()
{
int a,b;
printf("enter the numbers\n");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("%d is greater than %d",a,b);
}
else if(b>a)
{
printf("%d is greater than %d",b,a);
}
else
{
printf("numbers are equal");
}
}

