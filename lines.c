#include<stdio.h>
#include<string.h>
int main()
{
  int a,i,sum=0;
  char str[40];
  printf("enter the string");
  scanf("%s",&str);
  a=strlen(str);
  for(i=0;i<=a;i++)
  {
    if(str[i]=='.')
    {
      sum=sum+1;
    }
  }
  printf("%d",sum);
  return 0;
}
