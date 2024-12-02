/*Fazer um programa para calcular uma trajetória parabólica. O programa deve:
a. Receber do usuário a altura relativa ao solo de onde o projétil é lançado, a velocidade
inicial em m/s e o ângulo de lançamento
b. Calcular e mostrar a quantos metros de distância o projétil atingirá o chão,
considerando aceleração da gravidade igual a 9,81 m/s2*/
// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
double initialspeed, initialheight, initialangle,delta,meters,initialspeed_x,initialspeed_y,angle,graus;
double gravity = 9.81;
double time1, time2;
/*initialspeed = 10;
initialheight = 5;
graus = 45;*/

    //input by user
    printf("initialspeed\n");
    scanf("%lf",&initialspeed);
    printf("initialheight\n");
    scanf("%lf",&initialheight);
    printf("graus\n");
    scanf("%lf",&graus);

    //converting graus to rad
    angle = graus *(M_PI/180);
    printf("%2f",angle);
    // initial speed x
    initialspeed_x = initialspeed*cos(angle);
    printf("in X %2f\n",initialspeed_x);
     // initial speed y
    initialspeed_y = initialspeed*sin(angle);
    printf("in Y %2f\n",initialspeed_y);
    
    // 2 * - initialheight + 2 * initialspeed_y * time1 - (0,5) * gravity *(time1*time1) == - initialheight + initialspeed_y * time1 - (0,5) * gravity *(time1*time1)
    
    
    //delta b² - 4 a c = b initial speed, a  *gravity, c initial height
    delta = (initialspeed_y *2)*(initialspeed_y*2) - 4 * gravity * 2 * - initialheight;
    if (delta < 0) {
    printf("Erro: Delta negativo, sem solução real.\n");}

    printf("delta %2f\n",delta);

    // baskhara (-b (+/-) sqrt(delta))/
    
    time1 = (-(-initialspeed_y *2) + sqrt(delta))/(2 * gravity);
    time2 = (-(-initialspeed_y*2) - sqrt(delta))/(2 * gravity);

    
    //chosing the bigger time as solution


    if (time1 >= time2){
    meters = time1 * initialspeed_x;
    printf("time1 is  %2f and distancy %2f \n",time1,meters);}
    
    
    else if (time1 <= time2){
    meters = time2 * initialspeed_x;
    printf("time2, %2f \n",meters);
    }

    
    return 0;
}