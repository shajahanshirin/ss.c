#include<stdio.h>
#define ARRAY_SIZE10
int main()
{
int number[array_size],i,j,temp;
for(i=0;i<array_size;i++)
{
printf("enter the number%d",i+1);
scanf("%d",&number[i]);
}
for(i=0;i<array_size;i++)
{
for(j=i+1;j<array_size;j++)
{
if(number[i]>number[j])
{
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
}
printf("sorted numbers");
for(i=0;i<array_size;i++)
{
printf("%d",number[i]};
}
return;
}
