#include <stdio.h>

int main(void)
{
	int z,y,n,k[10],t,l;
	scanf("%d%d",&n,&l);
	for(z=0;z<n;z++)
	{
	scanf("%d",&k[z]);
	}
	for(z=0;z<n;z++)
	{
		for(y=z+1;y<n;y++)
		{
			if(k[z]>k[y])
			{
			t=k[z];
			k[z]=k[y];
			k[y]=t;
			}
		}
		}
		printf("%d",k[l-1]);
		
	return 0;
}
