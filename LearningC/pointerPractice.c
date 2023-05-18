#include <stdio.h>

struct Person{
    char name[20];
    int age;
};

void changeAge(struct Person *person, int age){
    person->age = age;
}

int main(){

    struct Person charlie;
    
    charlie.age = 12;
    changeAge(&charlie, 15);
    printf("%d", charlie.age);
    
    return 0;
}