#include <stdio.h>

int main(void) {
	char t[50];
	int i,j=0,b=0;
	scanf("%s",&t);
	for(i=0;t[i]!='\0';i++)
	{
		b++;
		if((t[i]=='0')||(t[i]=='1'))
			j++;
	}
	if(b==j)
		printf("Yes");
		else
		printf("No");
	return 0;
}

