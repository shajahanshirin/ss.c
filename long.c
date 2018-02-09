#include<stdio.h>
int main()
{
int temp,a[50],i,j,n;
printf("enter the n value");
scanf("%d",&n);
printf("enter the array value");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("small number,large number:%d%d",a[0],a[n-1]);
return 0;
}

