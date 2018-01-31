#include <stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int count=0,a,i;
	printf("enter the string");
	scanf("%s",&str);
	a=strlen(str);
	for(i=0;i<=a;i++)
	{
	if((str[i]>='a'&&str[i]<='z')||(str[i]<='A'&&str[i]>='Z'))
	{
		count++;
	}
	}
	printf("number of character:%d",count);
return 0;
}
