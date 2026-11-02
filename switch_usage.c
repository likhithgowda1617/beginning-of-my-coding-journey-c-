#include <stdio.h>
int main(void){
    int day;//1-monday, 2-tuesday, 3-wednesday, 4-thursday, 5-friday, 6-saturday, 7-sunday
    printf("enter day (1-7):");
    if(scanf("%d",&day)!=1){
        printf("invalid input\n");
        return 1;
    }
    else{
        if(day<1 || day>7){
            printf("invalid day\n");
            return 1;
        }
        switch(day){
        case 1: printf("monday\n");
                break;
        case 2: printf("tuesday\n");
                break;
        case 3: printf("wednesday\n"); 
                break;
        case 4: printf("thursday\n");
                break;
        case 5: printf("friday\n");
                break;
        case 6: printf("saturday\n");   
                break;
        case 7: printf("sunday\n");
                break;              
        default: printf("invalid day\n");

        }
   }
}
//nested switches and ifs are allowed
//switch can be in any order, but case values must be unique and constant expressions