#include <stdio.h>

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        printf("i: %d\n", i);
        for(int j = 0; j < size - i - 1; j++)
        {
            printf("j: %d\n", j);
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main()
{ 
    int array[] = {9, 1, 8, 2, 7};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
    
    return 0; 
}