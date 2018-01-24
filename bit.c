#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d\t%d",&a,&b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("swap number:%d\t%d",a,b);
	return 0;
}
