#include<stdio.h>
void main()
{
char name[30];
int m1,m2,m3,total;
float average;
printf("enter the name");
scanf("%s",name);
printf("enter the mark of three subjects");
scanf("%d %d %d",&m1,&m2,&m3);
total=m1+m2+m3;
average=(m1+m2+m3)/3;
printf("name:%s\n",name);
printf("total=%d\n",total);
printf("average=%f\n",average);
}
