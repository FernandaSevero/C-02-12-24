#include<stdio.h>
#include<math.h>

int main()
{   
    double A = sqrt(9);
    double B = pow(3,3);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-199); // modulo, distancia ate o zero
   /* fabs é usada para double.
    fabsf é usada para float.
    fabsl é usada para long double.*/
    
    double G =log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);
    
            
    printf("resultado %lf \n",A);
    printf("resultado %lf\n",B);
    printf("resultado %d\n",C);
    printf("resultado %d\n",D);
    printf("resultado %d\n",E);
    printf("resultado %lf\n",F);
    printf("resultado %lf\n",G);
    printf("resultado %lf\n",H);
    printf("resultado %lf\n",I);
    printf("resultado %lf\n",J);


return 0;
}