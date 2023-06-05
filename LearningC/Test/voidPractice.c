#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){

    int num = 33;
    float grade = 4.5;
    char ans = 'D';
    char name[] = "Thomas";

    printf("num: %d\n", num);
    printf("grade: %.1f\n", grade);
    printf("ans: %c\n", ans);
    printf("name: %s\n", name);

    int *pNum = NULL;
    pNum = &num;
    
    printf("num pointer's address: %p\n", &pNum);
    printf("pNum's pointer's address: %p\n", pNum);

    float *pGrade = &grade;
    printf("grade's address: %p\n", &grade);
    printf("pGrade's dereference value: %.1f\n", *pGrade);

    char *pAns = NULL;
    pAns = &ans;

    printf("pAns's address: %p\n", &pAns);

    char *pName = name;
    printf("pName's pointer value (printed in a loop): ");
    while (*pName != '\0'){
        printf("%c", *pName);
        pName++;
    }
    printf("\n");
    
    void *ptr = &num;
    printf("ptr's address: %p\n", &ptr);
    printf("ptr's pointer's address:    %p\n", ptr);
    // printf("ptr's dereference value: %p", *ptr); ERROR

    int newNum = *(int*)ptr;

    printf("newNum: %d", newNum);

    return 0;
}