#include <stdio.h>

int main(void) {
	int t,k,m=0;
	scanf("%d",&t);
	while(t!=0)
	{
		k=t%10;
		m=m*m+k*k;
		t=t/10;
		
	}
	printf("%d",m);
	return 0;
}
