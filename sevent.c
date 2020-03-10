#include<stdio.h>
#include<math.h>
void main()
{
int i,a,f=1;
float sum=0;
printf("enter the number to find series\n");
scanf("%d", &a);
for(i=1;i<a;i++)
{
f=f*1;
sum=sum+(i*1.00)/f;
}
printf("sum of series=%f\n",sum);
}
