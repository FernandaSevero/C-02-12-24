/* 6 - Faça um Programa que leia três números e mostre o maior deles.*/

#include<stdio.h>
int main () {
    float n1,n2,n3;
    printf("N1 \n");
    scanf("%f", & n1);
    printf("N2 \n");
    scanf("%f", & n2);
    printf("N3 \n");
    scanf("%f", & n3);
    
    printf("n1 %f, n2 %f, n3 %f \n ",n1,n2,n3);
    
    if (n1>n2){
        if(n1>n3){printf(" n1 o maior \n");}
        else if(n1<n3){printf("n3 o maior  \n");}
        else{printf(" n1> n2 e n1 = n2");}
        }    
        
     if (n2>n1){
        if(n2>n3){printf(" n2 o maior \n");}
        else if(n2<n3){printf("n3 o maior  \n");}
        else{printf("n2>n1 n1 = n2");}
}   

       if (n1==n2){
        if(n1>n3){printf(" n1 o maior \n");}
        else if(n1<n3){printf("n3 o maior  \n");}
        else{printf("n1 = n2 =n3");}
        }     
    
    return 0;}