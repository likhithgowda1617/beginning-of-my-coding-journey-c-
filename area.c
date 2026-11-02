#include<stdio.h>
int main(void){
    float side;
    printf("enter the side of square:");
    if(scanf("%f",&side)!=1){
        printf("invalid input\n");
    }
    else{
        if(side<0){
            prinf("side can't be negative\n");

        }
        else{
            printf("Area of square is: %.2f m^2",side*side);
        }
    }
}