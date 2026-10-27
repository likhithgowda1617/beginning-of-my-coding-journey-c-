#include <stdio.h>

//declaration/prototype
void printnamaste();
void printbonjour();


int main(){
    int opt;
    printf("opt 1.if you're Indian\nor\nopt 2.if you're french :");
    scanf ("%d",&opt);

    if (opt==1){
        printnamaste();
    }
    else if (opt==2){
        printbonjour();
    }
    return 0;
}

//function definition
void printnamaste(){
    printf("Namaste!");
}

void printbonjour(){
    printf("bonjour");
}