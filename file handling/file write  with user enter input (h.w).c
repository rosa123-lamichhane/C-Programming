//file write  with user enter input (h.w)
#include<stdio.h>
void main()
{
    FILE*open=fopen("text.txt","w");
    char sen[100];
    puts("Enter the sentence to store:");
    gets(sen);

    fputs(sen,open);

//write
   if(open==NULL)
     printf("file doesn't exist");
   else
    char c;
   while((c=fgetc(open))!=EOF)
   {
       printf("%c",c);
   }
   printf("\n");

    fclose(open);


  return 0;
}
