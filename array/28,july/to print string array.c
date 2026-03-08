//of string array
#include<stdio.h>
int main()
{
   char word[10]="Apple";
    // Print the whole word
   printf("%s ",word);

    //// Print each character until
    // null terminator is found
    for(int i=0;word[i]!='\0';i++)
    {

        printf(" %c",word[i]);
    }
//not to print p


    for(int i=0;word[i]!='\0';i++)
    {
       if(word[i]=='p')
       {
           continue; // Skip printing 'p'
       }

           printf("\n%c",word[i]);
    }


    return 0;
}
// if (word[i] == 'p' || word[i] == 'l')
//    So for skipping multiple different characters,
//    always use ||.
