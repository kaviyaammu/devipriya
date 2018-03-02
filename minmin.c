#include <stdio.h>

int main(void)
{
	int x,y,k,t1[10],t;
	scanf("%d",&k);
	for(x=0;x<k;x++)
	{
	scanf("%d",&t1[x]);
	}
	for(x=0;x<k;x++)
	{
		for(y=x+1;y<k;y++)
		{
			if(t1[x]>t1[y])
			{
			t=t1[x];
			t1[x]=t1[y];
			t1[y]=t;
			}
		}
		}
		printf("%d",t1[0]);
		
	return 0;
}
