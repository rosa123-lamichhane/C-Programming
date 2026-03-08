# include<stdio.h>
int main()
{
   int alpha;
   printf("ENter the alphabet:");
   scanf("%d",&alpha);

   switch(alpha)
   {

     {
        case 'a':
         case 'e':
         case 'i':
        case 'o':
        case 'u':
        case 'A':
         case 'E':
         case 'I':
        case 'O':
        case 'U':
            printf("vowel.");
            break;
     }
        default :
          printf("consonants");
          break ;
    }




   return 0;
}
