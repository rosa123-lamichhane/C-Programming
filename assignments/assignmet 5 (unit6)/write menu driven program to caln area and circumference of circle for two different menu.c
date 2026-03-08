//write menu driven program to caln area and circumference of circle for two different menu.c
//area of circle=pi*r*r
//circumference of cire=2*pi*r


#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()

{
    int choice;
    float area,circumference;
    float radius;

  while(1){

    printf("The area of circle MENU\n");
    printf("\n1.calculate area of circle"
           "\n2.calculate circumference of circle"
           "\n3.Exit");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the radius:");
        scanf("%f",&radius);

        area=PI*radius*radius;
        printf("\n the area is:%f",area);
        break;

    case 2:
        printf("Enter the radius:");
        scanf("%f",&radius);

        circumference=2*PI*radius;
        printf("\n the circumference is:%f",circumference);
        break;


    case 3:
        exit(0);
        break;

    default:
        printf("Invalid input!!");
        break;
    }




  }
    return 0;
}

//1️⃣ Understand the formulas
//Area = π × r × r
//
//Circumference = 2 × π × r
//Use:
//
//c
//Copy
//Edit
//#define PI 3.1416
//at the top.
//
//2️⃣ What is a menu-driven program?
//It shows a menu to the user:
//    1. Calculate area of circle
//2. Calculate circumference of circle
//3. Exit
//Enter your choice:
//
//
//3️⃣ Plan the steps logically
//Display menu repeatedly using a loop (e.g., while(1) or do-while).
//
//Take user choice using scanf.
//
//If:
//
//choice == 1:
//
//ask user to enter radius
//
//calculate and display area.
//
//choice == 2:
//
//ask user to enter radius
//
//calculate and display circumference.
//
//choice == 3:
//
//exit the program (return 0; or break;).
//
//else:
//
//print “Invalid choice”.
//
