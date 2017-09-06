# devipriya
#include<stdio.h>
int main()
{
char c;
int lcase,hcase;
printf("Enter the alphabet: ");
lcase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
hcase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lcase==hcase)
printf("%c is vowel",c);
else
printf("%c is cosonent",c);
return 0;
}
