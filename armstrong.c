#include <stdio.h>

int main(void)
{
	int n,o,r,r1=0;
	printf("the given number is");
	scanf("%d",&n);
	o=n;
	while(o!=0)
	{
		r=o%10;
		r1=r*r*r;
		o/=10;
	}
	if(r1==n)
	{
		printf("it is armstrong number");
	}
	else
	{
		printf("not an armstrong number");
	}
	return 0;
}

