#include <stdio.h>
#include <string.h>

int main(){
    // Swapping single values
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x: %c\n", x);
    printf("y: %c\n", y);

    printf("\n\n");

    // Swapping strings
    char wtr[15] = "Water";
    char lmn[15] = "Soda";
    char tmp[15];

    strcpy(tmp, wtr);
    strcpy(wtr, lmn);
    strcpy(lmn, tmp);

    printf("wtr: %s\n", wtr);
    printf("lmn: %s\n", lmn);

    return 0;
}