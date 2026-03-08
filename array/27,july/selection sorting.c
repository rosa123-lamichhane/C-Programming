////about selection sorting and buble sorting.c
//What is Selection Sort?
////In every iteration, it selects the smallest element from the unsorted
//part  and swaps it  with the first unsorted element.
//
//What is Bubble Sort?
//Definition:
//Bubble Sort repeatedly swaps adjacent elements if they are in the wrong order.



//sorting in ascending order
#include<stdio.h>
int main()
{
    int a[5],temp;
    printf("Enter the 5 values:\n");

//for input
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Displaying array.");

    //acending sorting code
    for(int i=0;i<5-1;i++)
    {
        for (int j=0;j<5-1-i;j++)
        {
            // For ascending order: a[j] > a[j+1]
             // For descending order: a[j] < a[j+1]
            if(a[j]>a[j+1])//accesiding//if for descending:<            {
                {
                    //swap code
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }


            }
        }

    //output
    printf("Sorted array in ascending order:\n");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
          }



    return 0;
}



//What is Bubble Sort?
//Definition: Bubble Sort repeatedly compares and swaps adjacent
// elements if they are in the wrong order.
//
//Working Principle:
//
//After each pass, the largest element bubbles up to the end of the array.
//
// What is Selection Sort?
//Definition: In each pass, it selects the smallest (or largest) element
// from the unsorted part and swaps it with the first unsorted element.
//
//Comparison with Bubble Sort:
//
//Fewer swaps than Bubble Sort

//Often more efficient in practice

//
//| Feature    | Bubble Sort                       | Selection Sort                     |
//| ---------- | --------------------------------- | ---------------------------------- |
//| Swapping   | **Many times** (every comparison) | **Few swaps** (once per pass)      |
//| Efficiency | Less efficient for large data     | Slightly better due to fewer swaps |
//| Logic      | Swaps adjacent elements           | Selects minimum and swaps once     |
//
