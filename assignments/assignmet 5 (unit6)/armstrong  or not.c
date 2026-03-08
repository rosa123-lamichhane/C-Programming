//armstrong  or not.c
//calculate the sum of each digit raised to the power of the number
// of digits and compare it with the original number.
//If they are equal, the number is an Armstrong number.
//formula: abcd... = an + bn + cn + dn +
//for 3 digits only

#include<stdio.h>
#include<math.h>
int main()
{
   int num,original_num,reminder,result=0;

   printf("Enter the 3 digits num:");
   scanf("%d",&num);
   original_num=num;// // Store the original number for final comparison

   // Loop to extract each digit and calculate cube sum
   while(original_num!=0)
   {
       // Get the last digit (example: 153 % 10 = 3)
       reminder=original_num%10;
        // Add the cube of that digit to result

       result=result+(reminder*reminder*reminder);

        // removing last digit from the orignal number
         // Remove the last digit (example: 153 / 10 = 15)
        original_num=original_num/10;

   }
   // After the loop, compare result with original number
   if(result==num)
   {
       printf("%d is an Armstrong number",num);
   }
   else{
    printf("it's not a armstrong number.",num);
   }


    return 0;
}

//153 is an Armstrong number
//Count the digits:
//153 has 3 digits.
//Raise each digit to the power of 3 and sum them:
//13 = 1
//53 = 125
//33 = 27
//Sum these values:
//1 + 125 + 27 = 153
