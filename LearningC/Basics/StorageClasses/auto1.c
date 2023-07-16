/*

    auto is the default scope if you don't specify it
    int a = 10;
        =
    auto int a = 10;

    Default value: garbage
    Scope: Block/Function
    Location: Stack
    Lifetime: within the block/function

*/

#include <stdio.h>

int main(){
    auto int x = 10;
    printf("%d\n", x);
    {
        auto int x = 20;
        printf("%d\n", x);
    }
    printf("%d\n", x);
    return 0;
}