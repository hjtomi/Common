#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){

    int nums[] = {5, 6, 7, 8};
    // float grades[] = {1.8, 5, 3.3, 2.9, 4.88};
    // bool values[] = {true, false, false, true};

    int len = arrilen(nums);
    printf("len: %d\n", len);

    return 0;
}