#include <stdio.h>

// Function declaration before the main function without a body for better navigation (called a function prototype)
void findMax(int ,int);

int main(){
    findMax(6, 6);
    return 0;
}

void findMax(int x, int y){
    // Shortcut for an if else block
    // returns value after '?' if paratheses is true else returns what is after the ':'
    int max = (x > y) ? x : y;
    printf("%d", max);
}