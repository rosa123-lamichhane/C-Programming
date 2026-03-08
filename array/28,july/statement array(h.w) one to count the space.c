//statement array(h.w) one to count the space.c
//to scanf string always use the gets
#include<stdio.h>
int main()
{
//    //from user+for string
//    char word[50];
//    printf("Enter the sentence:");
//    gets(word);
//    printf("%s",word);

   //to count the space in sentence
   //You need a loop to count spaces in the string.
   //To print count, use %d (not %s).
     char word[50];
     int count=0;

     printf("Enter the sentence:");
     gets(word);//for user input

     //count spaces
     //Loop = go through each character →
     // check if it's a space → count it.
     for(int i=0;word[i]!='\0';i++)
     {
         if(word[i]==' ')
         {
             count++;
         }
     }

     printf("\n%s",word);

     //for count print
     printf("no of spaces:%d\n",count);



    return 0;
}
