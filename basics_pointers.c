#include<stdio.h>
// pointers
// syntax:
// int age=22;
// int *ptr=&age;
// int _age=*ptr;

int main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    //address
    // printf("%d\n",_age);
    // printf("%p\n",&age);
    // printf("%u\n",&age);
    // printf("%p\n",ptr);
    // printf("%p",&ptr);

    //value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
    
}
