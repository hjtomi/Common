#include <stdio.h>

int main(int argc, char const *argv[])
{
    // BITWISE OPS
    // & AND
    // | OR
    // ^ XOR
    // << LEFT SHIFT
    // >> RIGHT SHIFT

    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z;

    z = x & y;
    printf("%d\n", z);

    z = x | y;
    printf("%d\n", z);

    z = x ^ y;
    printf("%d\n", z);

    z = x << 1;
    printf("%d\n", z);

    z = x >> 1;
    printf("%d\n", z);

    return 0;
}
