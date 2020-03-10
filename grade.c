#include <stdio.h>
void main()
{
int s1,s2,s3,s4,s5,sum,perc;
printf("enter s1,s2,s3,s4,s5 values\n");
scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
sum=(s1+s2+s3+s4+s5);
perc=sum*100/500;
if(perc>=90)
printf("grade=s\n");
else if(perc>80 && perc<=89)
printf("grade=a\n");
else if(perc>70 && perc<=79)
printf("grade=b\n");
else if(perc>60 && perc<=69)
printf("grade=c\n");
else
printf("grade=fail\n");
}
