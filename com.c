#include<stdio.h>
void main()
{
int age;
char ms,g;
printf("enter age,ms,g\n");
scanf("%d %c %c", &age, &ms, &g);
if(ms=='m')
printf("insured\n");
else if(ms=='u' && age>25 &&g=='f')
printf("insured\n");
else if(ms=='u' && age>30 &&g=='m')
printf("insured\n");
else
printf("not insured\n");
}
