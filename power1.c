#include<stdio.h>
int main(_)
{
int a,b;
long long p=1;
int i;
printf(" enter the base value");
scanf("%d",&b);
printf("enter the exponential valur");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
p=p*b;
}
printf("the power is %d",p);
return 0;
}
