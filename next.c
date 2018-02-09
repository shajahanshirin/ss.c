#include <stdio.h>
int main()
{
int n;
 printf("enter the number");
scanf("%d",&n);
if(n>100000)
{
n=n+1;
}
printf("next number:%d",n+1);
return 0;
}
