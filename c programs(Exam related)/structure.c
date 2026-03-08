//enter id,name&post and salary of 25 employess into structure variable called emp
//and display the  salary grater than 20000
//wrong
#include<stdio.h>

    struct  emp
    {
        int id;
        char name[30];
        char post[30];
        float salary;


    };
    void main()
    {
        struct emp e[2];
//        int n;
//        printf("Enter num. of employees(mas 25):");
//        scanf("%d",&n);

       //for input
       for(int i=0;i<2;i++)
       {
           printf("Enter details of employees:%d\n",i+1);
           printf("Enter the ID :");
           scanf("%d",&e[i].id);
            printf("Enter the name:");
           scanf("%s",e[i].name);
           printf("Enter the post:");
           scanf("%s",e[i].post);
           printf("Enter the salary:");
           scanf("%f",&e[i].salary);
       }

       //logic+printf
//       printf("\n Employees with salary>20000:\n");
       for(int i=0;i<2;i++)
       {
         if(e[i].salary>20000)
         {
//             printf("%d\n",e[i].id);
//             printf("%s\n",e[i].name);
//             printf("%s\n",e[i].post);
//              printf("%f\n",e[i].salary);

      printf("Id:%d|name:%s|post:%s|salary:%f\n",e[i].id,e[i].name,e[i].post,e[i].salary);

         }


       }
      return 0;
}

