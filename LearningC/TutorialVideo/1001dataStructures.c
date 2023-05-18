#include <stdio.h>
#include <string.h>

int main(){
    // Array
    double prices[5] = {2, 5, 20, 199, 45};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("%.2lf\n", prices[i]);
    }

    printf("\n\n");

    // 2D Array
    double pricesMatrix[2][3] = {{1,2,3},{4,5,6}};

    for(int i = 0; i < sizeof(pricesMatrix)/sizeof(pricesMatrix[0]); i++)
    {
        for(int j = 0; j < sizeof(pricesMatrix[0])/sizeof(pricesMatrix[0][0]); j++)
        {
            printf("%.3lf\n", pricesMatrix[i][j]);
        }
    }

    printf("\n\n");

    // Array of strings
    // NOTE: Each string is already an array so it's like a 2D array
    char cars[][10] = {"Audi", "Toyota", "Mercedes"};
    strcpy(cars[1], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("The car is: %s\n", cars[i]);
    }

    return 0;
}