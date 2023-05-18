#include <stdio.h>

int main(){
    // If Else
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(17 < age){
        printf("You can drink beer :D");
    }
    else if(age < 1){
        printf("You haven't been born yet.");
    }
    else{
        printf("You can't drink beer :C");
    }

    // Switch
    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("You did great");
            break;
        case 'B':
            printf("You did good");
            break;
        case 'C':
            printf("You did meh");
            break;
        case 'D':
            printf("You did poor");
            break;
        case 'F':
            printf("You did nothing");
            break;
        
        default:
            printf("Please enter only valid grades");
            break;
    }

    return 0;
}