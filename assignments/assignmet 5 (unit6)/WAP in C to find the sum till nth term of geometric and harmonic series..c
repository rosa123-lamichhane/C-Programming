//WAP in C to find the sum till nth term of geometric and harmonic series.
//GS:a,ar,ar^2,ar^3....


#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float a,r;
    float gs_series=0,hs_series=0;
    printf("Enter the a,r &n:");
    scanf("%f%f%d",&a,&r,&n);

    //geometric series calculation.

    if(r==1)
    {
       gs_series =a*n;

    }

    else{
        gs_series=a*(1-pow(r,n))/(1-r);
    }


    //harmonic series claculation:
    //1+1/2+1/3+.....+1/n

     for(int i=1;i<=n;i++)
     {
         hs_series=hs_series+(1.0/i);
     }
     printf("sum of harmonic series:%f",hs_series);
      printf("\n sum of geometric series:%f",gs_series);


    return 0;
}
