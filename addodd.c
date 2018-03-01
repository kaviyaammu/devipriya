#include <stdio.h>

int main(void) {
int t,k,m,n=0;
scanf("%d%d",&t,&k);
for(m=t;m<k;m++)
{
	if(m%2!=0)
	{
	n=n+m;
	}
}
printf("%d",n);
	return 0;
}
