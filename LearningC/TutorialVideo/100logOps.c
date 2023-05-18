#include <stdio.h>
#include <stdbool.h>

int main(){
    float temp = -1;
    bool sunny = true;
    bool badWeather = true;

    if ((temp >= 0 && temp <= 30 && sunny) || !badWeather){
        printf("The weather is good.");
    }
    else{
        printf("The weather is bad.");
    }
    
    return 0;
}