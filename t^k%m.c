#include <stdio.h>

int main(void) {
	int t,k,m,l;
	scanf("%d%d%d",&t,&k,&m);
	l=(t^k)%m;
	printf("%d",l);
	return 0;
}
