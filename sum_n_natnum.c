#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("enter a natural number to find the sum from 1 to n");
    scanf("%d",&n);
    printf("sum is :%d",sum(n));
    return 0;

}

//recursive function
int sum(int n){
    if(n==1){
        return 1;

    }
    int sumnm1=sum(n-1);//sum of 1 to n
    int sum=sumnm1+n;
    return sum;
}

// Logic:

// for ex: if n=5
//               sum(5)
//                 |
//                 |
//                --
//                |
//                sum(4)+5
//                  |
//                  |
//                 --
//                 |
//                 sum(3)+4
//                 |
//                 |
//                 |