#include<stdio.h>

int main() {
  int t,x,flag=0;
  scanf("%d",&t);
  for(x=1;x<=t;x++)
  {
      if(t/x==x)
      {
          flag++;
      }
  }
  if(flag==1)
  {
          printf("yes");
          }
          else
          {
              printf("no");
          }
  return 0;
}
