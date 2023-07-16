#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "common.h"

void arriprint(int array[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1){
            printf("%d", *array);
            break;
        }

        printf("%d, ", *array);
        array++;
    }
    printf("}\n");
}

void arrfprint(float array[], int size, int decSize)
{
    // Format the output to x decimals
    char format[10];
    sprintf(format, "%%.%df", decSize);

    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf(format, *array);
            break;
        }

        printf(format, *array);
        printf(", ");
        array++;
    }
    printf("}\n");
}

void arrdprint(double array[], int size, int decSize)
{
    // Format the output to x decimals
    char format[20];
    sprintf(format, "%%.%df", decSize);
    printf("%s\n", format);

    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1){
            printf(format, *array);
            break;
        }

        printf(format, *array);
        printf(", ");
        array++;
    }
    printf("}\n");
}

void arrbprint(bool array[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1){
            printf("%s", *array ? "true" : "faalse");
            break;
        }

        printf("%s, ", *array ? "true" : "false");
        array++;
    }
    printf("}\n");
}

// int main(void){
//     return 0;
// }