//file write(fputs used).c
#include<stdio.h>
int main()
{
    FILE*open=fopen("ohh.txt","w");
    if(open==NULL)
    {
        printf("Error opening file.\n");
    }
//    else
//    {
//        int i=0;
//        char*sen="hello it's me.Rosa!";
//        while(sen[i]!='\0')
//        {
//            fputc(sen[i],open);
//            i++;
//        }
//         printf("%s\n", sen);  // Print to console too
//
//    }
//
////    // write each character using fputc
////    for (int i = 0; text[i] != '\0'; i++) {
////        fputc(text[i], fp);


    else{


    fputc('h',open);
     fputc('e',open);
     fputc('l',open);
   fputc('l',open);
    fputc('o',open);
     fputc('i',open);
     fputc('t',open);
      fputc('m',open);
      fputc('e',open);
       fputc('R',open);
        fputc('o',open);
         fputc('s',open);
          fputc('a',open);
    }


    fclose(open);

    return 0;
}
