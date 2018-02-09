#include<stdio.h>
int main()
{
int t=1,n,i;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
t=t*2;
if(t==n)
{
printf("yes");
}
}
return 0;
}
