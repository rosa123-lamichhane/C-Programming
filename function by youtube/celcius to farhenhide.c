//
#include<stdio.h>
//function prototype
//int variable(datatype,datatype);
float c2f(float);


//function definition
//int variable(datatype_variable,datatype)
float c2f(float c)
{
    return  ((9.0*c)/5.0)+32;
}

//main body
int main()
{
    float b= 45;
    printf("the c2f:%.2f",c2f(b));
    return 0;

}
