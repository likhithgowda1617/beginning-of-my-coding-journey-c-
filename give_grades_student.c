#include <stdio.h>
int main(void){
    int marks;
    printf("enter marks:");
    if(scanf("%d",&marks)!=1){
        printf("invalid input\n");
    }
    else{
        if(marks>=90 && marks<=100){
            printf("A+\n");
        }
        else if(marks>=70 && marks<90){
            printf("A\n");
        }
        else if(marks>=30 && marks<70){
            printf("B\n");
        }
        else if(marks>=0 && marks<30){
            printf("C\n");
        }
        else{
            printf("Invalid marks\n");
        }
    }
}