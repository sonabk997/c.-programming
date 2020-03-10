#include <stdio.h>
void main()
{
int a,b,c;
printf("enter three sides\n");
scanf("%d %d %d", &a, &b, &c );
if((a+b>c)||(a+c>b)||(b+c>a))
printf("triangle is valid\n");
else
printf("triangle is not valid\n");
}
