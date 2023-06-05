#include <stdio.h>
#include <string.h>

int main(){

    // For loop
    for(int i = 0; i <= 10; i+=2){
        printf("%d\n",i);
    }

    // While loop
    char name[25];
    printf("Was ist dein name?");
    fgets(name, 25, stdin);
    // Makes the enter a null character
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("BAD\n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Your name is %s\n", name);

    // Do while loop - Executes the block once then starts to work as a normal while loop
    int number = 0;
    int sum = 0;

    do{
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);
    
    printf("sum: %d", sum);

    // Nested for loops
    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        if (i % 2 == 0){
            printf(" - twice");
        }
        printf("\n");
    }

    return 0;
}