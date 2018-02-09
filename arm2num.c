#include <stdio.h>
int main(void) {
	int t,k,i,l,m,temp;
	scanf("%d\t%d",&t,&k);
	for(i=t+1;i<k;++i)
	{
		temp=t;
		l=0;
		while(temp!=0)
		{
			m=(temp%10);
			l+=m*m*m;
			temp/=10;
				}
				if(i==l)
				{
					printf("%d",i);
				}
	}
	return 0;
}
