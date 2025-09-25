#include<stdio.h>
int main()
{ char ch;
printf(" enter the character");
scanf("%c,&ch");
if(ch>='A'&&  ch<='Z'|| ch<='a'&& ch<='z')
printf(" given character is an alphabet");
else
printf(" the given character is not an alphabet ");
return 0;
}