#include <stdio.h>
// Enums are *special*

enum Day {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

// With typedef 
typedef enum {Audi, VolksWagen, Mercedes}Car;

int main(){

    enum Day today = Sun;

    if (today == Sat || today == Sun){
        printf("Gotta work\n");
    }
    else{
        printf("Gotta go to school f me\n");
    }

    // Typedef enum
    Car myCar = Mercedes;

    if (myCar == Audi){
        printf("You are cool!\n");
    }
    else{
        printf("You could be cooler...\n");
    }

    return 0;
}