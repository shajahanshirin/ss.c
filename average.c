#include<stdio.h>
int main()
{
int t,n,i,a[10];
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
t=n/2;
printf("average:%d",a[t]);
return 0;
}
