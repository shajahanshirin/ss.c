#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d\t%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap numbers%d\t%d",a,b);
	return 0;
}
