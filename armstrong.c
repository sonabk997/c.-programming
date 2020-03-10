#include<stdio.h>
void main()
{
int n,m,r,s=0;
printf("enter n values\n");
scanf("%d",&n);
m=n;
while(m!=0)
{
r=m%10;
s=s+r*r*r;
m=m/10;
}
if(s==n)
printf("arm\n");
else
printf("not arm\n");
}
