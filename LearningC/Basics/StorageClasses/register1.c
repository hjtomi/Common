// Same as auto but it stores the variable in the CPU's register
// !! We can't get the address of register variables as they are not in the RAM

#include <stdio.h>
#include <time.h>

int main(){
    time_t startTime = clock();
    register int i = 0;
    for (i = 0; i < 10000; i++)
    {
        printf("%d\n", i);
    }
    time_t endTime = clock() - startTime;
    printf("%d", endTime);
    
    
    return 0;
}