#include <stdio.h>

int main(void) {
	int x,y,m=0;
	scanf("%d",&x);
	while(x!=0)
	{
		y=x%10;
		m=m*m+y*y;
		x=x/10;
		
	}
	printf("%d",m);
	return 0;
}
