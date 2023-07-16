#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void arriprint(void *pArr, int size)
{
    int *intPtr = NULL;
    intPtr = (int*)pArr;

    for (int i = 0; i < size; i++){
        printf("%d ", intPtr[i]);
    }
    printf("\n");
}

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
    printf("newNum: %d\n", newNum);

    int numbers[] = {3, 7, 56, 345, 98, 109, 784, 12, 48, 18, 92, 202, 90};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    fun(&numbers, size);

    return 0;
}