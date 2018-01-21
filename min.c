#include<stdio.h>
int smallest(int arr[],int n)
{
int i;
int min=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]<min)
{
min=arr[i];
return min;
}
}
}
int main()
{
int arr[]={10,30,50,40};
int n=sizeof(arr)/sizeof(arr[0]);
printf("minimum%d",smallest(arr,n));
return;
}
