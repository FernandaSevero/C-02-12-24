#include <stdio.h>
double square (double x)
{
    /* double going to square that double and 
    return the result back to the calling funcition */
    /*when we call a function we can also  return a value
     backt to the spot in with we calling the function*/
     /*we can not use void here for the same reason in
     the main function int its linked with 0*/
     double result = x * x;
     return result;

     /*we coul use just
     return  x*x;    */
}

int main(){
    /* return = return a value back to a callig function
    Int main is the calling function*/
    double x = square(3);
    printf("%lf",x);
    return 0;
}