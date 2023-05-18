#include <stdio.h>
#include <math.h>

int birthday(char name[], int age){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you %s!", name);
    printf("\nHappy birthday %d!\n", age);
    return sqrt(age);
}

int main(){
    char name[] = "Tamas";
    int age = 16;
    
    printf("Your age's square root: %i", birthday(name, age));
    return 0;
}