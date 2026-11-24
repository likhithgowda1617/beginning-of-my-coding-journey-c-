// pointer to pointer 
// Syntax:
// int **pptr
// char **pptr
// float **pptr

#include<stdio.h>

int main(){
    float pric=100.00;
    float *ptr=&pric;
    float **pptr=&ptr;
    printf("%.2f\n",**pptr);
    return 0;
}