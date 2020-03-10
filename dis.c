#include<stdio.h>
#include<math.h>
int main()
{
int x1, y1, x2, y2, x, y, distance;
printf("enter coordinates of first point: ");
scanf("%d %d", & x1, & y1);
printf("enter the coordinates of second point: ");
scanf("%d %d", & x2, & y2);
x = (x2-x1);
y = (y2-y1);
distance = sqrt(x*x + y*y);
printf("distance = %d", distance);
}
