#include<stdio.h>
#include<string.h>
int main()
{
  int a,i;
  char str[40];
  printf("enter the string");
  scanf("%s",&str);
    if((str[i]>='a'&&str[i]<='z')&&(str[i]>='0'&&str[i]<='9'))
    {
      printf("yes");
    }
    else
    {
      printf("no");
    }
  return 0;
}
