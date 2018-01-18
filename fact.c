#include<stdio.h>
int main(void)
{
	int t,i,fact=1;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return  0;
}
