#include<stdio.h>
int main()
{
//  char alpha;
//  printf("Enter the alphabet:");
//  scanf("%c",&alpha);
//
//  if((alpha=='a'||alpha=='e'||alpha=='i'||alpha=='0'||alpha=='u')||
//     (alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'))
//
//        printf("This is vowel.");
//
//  else
//    printf("This is consonant.");


    /* by switch*/

    char alpha;
  printf("Enter the alphabet:");
  scanf("%c",&alpha);

  switch((alpha=='a'||alpha=='e'||alpha=='i'||alpha=='0'||alpha=='u')||
     (alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'))
  {
         case 1:
             printf("vowels.");
             break;

        case 0:
            printf("it's consonant.");
            break;

   }

   return 0;

}
