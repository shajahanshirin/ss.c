#include <stdio.h>
int main()
{
	int n,count=0,i;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("number of digits%d",count);
	return 0;
}
