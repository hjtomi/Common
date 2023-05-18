#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    printf("Your temperature in Celsius or Farenheit (C/F): ");
    scanf("%c", &unit);

    if (unit == 'C'){
        float temp;
        printf("temperature: ");
        scanf("%f", &temp);
        float converted_temp = 1.8 * temp + 32;
        printf("%.1f", converted_temp);
    }
    else if (unit == 'F'){
        float temp;
        printf("temperature: ");
        scanf("%f", &temp);
        float converted_temp = (temp - 32) * 5/9;
        printf("%.1f", converted_temp);
    }

    return 0;
}