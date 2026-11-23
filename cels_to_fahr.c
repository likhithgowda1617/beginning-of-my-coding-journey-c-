#include<stdio.h>
float converttemp(float cel);

int main(){
    float cel;
    printf("enter the value of degree in celsius");
    scanf("%f",&cel);
    printf("the value of farheneit converted form celsius is %.2fF",converttemp(cel));
    return 0;
}

float converttemp(float cel){
    float far=cel*(9.0/5.0)+32;
    return far;
}