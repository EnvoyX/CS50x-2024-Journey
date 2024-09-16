#include <stdio.h>

int main(void){
    //Fullname

    char FullName[30];

    printf("Enter your full name: \n");

    fgets(FullName, sizeof(FullName), stdin);

    printf("Hello, %s", FullName);

     //fgets() is for multiple word
}