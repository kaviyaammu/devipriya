#include <stdio.h>

int largest(int arr[],int n)
{
	int i;
	int max=arr[0];
	for(i=1;i<n;i++)
	max=arr[i];
	return max;
}
int main()

{
	int arr[]={23,45,12,4567,2345};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("%d",largest(arr,n));
	return 0;
}
