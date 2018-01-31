#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int sum=1,i,a;
  printf("enter the string:");
  scanf("%s",&str);
  a=strlen(str);
  for(i=0;i<=a;i++)
  {
    if(str[i]==' ')
    {
      sum=sum+1;
    }
  }
   printf("number of words:%d",sum);
return 0;
}
