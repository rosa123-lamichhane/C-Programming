#include<stdio.h>
int main()
{
  FILE*fp=fopen("ohh.txt","r");//name+operation
  if(fp==NULL)
  {//file doesn't exist
      printf("file doesn't exist.");
  }
  else
{
    //file exist.
//    printf("file exist\n");
//    char sen=fgetc(fp);
//    printf("%c\n",sen);//print first word only.

     //to print all sen
     char sen;
     while((sen=fgetc(fp))!=EOF)
     {
        printf("%c",sen);
     }

  }
  printf("\n");


   fclose(fp);


    return 0;
}

