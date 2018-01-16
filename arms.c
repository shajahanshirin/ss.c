#include<stdio.h>
int main()
{
int num,a,b,res=0;
printf("enter the number");
scanf("%d",&num);
a=num;
while(a!=0)
{
b=a%10;
res=b*b*b;
a/=10;
}
if(res=num)
{
printf("armstrong number");
}
else
{
printf("not a armstrong number");
}
}
