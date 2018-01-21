#include<stdio.h>
int main()
{
int hr,min,n;
printf("enter the minutes");
scanf("%d",&n);
if(n<60)
{
printf("%d",n);
}
if(n>60)
{
hr=n/60;
min=n%60;
printf("time is%d.%d",hr,min);
}
}
