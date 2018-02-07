#include <stdio.h>
int main(void) 
{
	char a[20],b[20];
	int m,n;
	printf("\nenter the frst string");
	scanf("%s",&a);
	printf("\nenter the second string");
	scanf("%s",&b);
	m=strlen(a);
	n=strlen(b);
	if(m>n)
	{
		printf("%s\n",a);
	}
	else if(m<n)
	{
		printf("%s\n",b);
	}
	else
	{
		printf("%s",a);
	}
	return 0;
}
