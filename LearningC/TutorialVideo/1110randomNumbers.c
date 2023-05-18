#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int number1 = rand() % 6 + 1;
    int number2 = rand() % 6 + 1;
    int number3 = rand() % 6 + 1;
    int number4 = rand() % 6 + 1;
    int number5 = rand() % 6 + 1;
    int number6 = rand() % 6 + 1;
    int number7 = rand() % 6 + 1;
    int number8 = rand() % 6 + 1;
    int number9 = rand() % 6 + 1;
    printf("%d %d %d %d %d %d %d %d %d", number1, number2, number3, number4, number5, number6, number7, number8, number9);
    return 0;
}
