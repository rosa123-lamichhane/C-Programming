#include<stdio.h>
int main()
{
  char ch;//no use of '' here .
  printf("Enter the character:");
  scanf("%c",&ch);

  if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
    printf("the ch is character.");
  else if(ch>='0'&&ch<='9')//because of ASCII conditions
    printf("it's a number.");
  else
    printf("it's a symbol");


    return 0;
}
