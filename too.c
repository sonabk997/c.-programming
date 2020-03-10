#include <stdio.h>
void main()
{
int side1,side2,side3;
printf("enter 3 side of a triangle\n");
scanf("%d %d %d",&side1,&side2,&side3);
if(side1==side2 && side2==side3 && side1==side3)
printf("triangle is equilateral\n");
else if(side1!=side2 && side2!=side3 && side1!=side3)
printf("triangle is scalene\n");
else
printf("triangle is isoceles");
}


