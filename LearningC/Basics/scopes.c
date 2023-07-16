// 3 SCOPES: BLOCK, FUNCTION/METHOD, PROGRAM
#include <stdio.h>

int a = 50;
int b = 100;

void fun(){
    int a = 30;
    b = 10;
    printf("Inside function %d\n", a); // Function scope 30
    printf("Inside function %d\n", b); // Function scope 10
}

int main()
{
    printf("%d\n", b); // Program scope 100
    fun();
    {
        int a = 20;
        printf("Inside block %d\n", a); // Block scope 20
    }
    {
        printf("%d\n", a++); // Program scope 50
    }
    printf("%d\n", a); // Program scope 51
    return 0;
}
