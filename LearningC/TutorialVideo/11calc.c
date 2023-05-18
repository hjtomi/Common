#include <stdio.h>
#include <stdbool.h>

int main(){
    bool fail = false;
    char op;
    double n1;
    double n2;
    double result;

    printf("Enter number 1: ");
    scanf("%lf", &n1);

    printf("\nEnter an operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter number 2: ");
    scanf("%lf", &n2);

    switch (op)
    {
    case '+':
        result = n1 + n2;
        break;

    case '-':
        result = n1 - n2;
        break;

    case '*':
        result = n1 * n2;
        break;

    case '/':
        result = n1 / n2;
        break;
    
    default:
        printf("Operator \"%c\" is invalid.", fail);
        fail = true;
        break;
    }

    if(fail == false){
        printf("%lf", result);
    }

    return 0;
}
