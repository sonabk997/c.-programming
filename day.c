#include <stdio.h>
int main()
{
int days,months,weeks,years;
printf("enter the number of days");
scanf("%d",&days);
months=days/30;
printf("the number of months are :%d\n",months);
weeks=days/4;
printf("the number of weeks are :%d\n",weeks);
years=days/365;
printf("the number of years are:%d\n",years);
}
