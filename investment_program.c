#include <stdio.h>


int main(void){
    int year,period,principal;
    float amt,value,inrate;
    
    printf("enter principal amount and period of years: ");
    if(scanf("%d %d", &principal, &period)!=2){
        printf("invalid input\n");
        return 1;
    }
    
    else{
        amt=principal;
        inrate=0.11;
        year=0;

        while(year<=period){
            printf("%d %8.2f\n",year,amt);
            value=amt+inrate*amt;
            year=year+1;
            amt=value;
        }
    }
}