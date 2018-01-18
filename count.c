#include<stdio.h>
int main()
{
	long long a;
	int count=0;
	scanf("%d",&a);
	while(a!=0)
	{
		a/=10;
		++count;
	}
	printf("%d",count);
	
}
