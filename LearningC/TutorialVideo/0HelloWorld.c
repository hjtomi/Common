#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    /*
    int x;
    x = 4;

    float gpa = 2.05;
    int age = 16;
    char grade = 'C';
    char name[] = "TAMAS";
    unsigned char numbah = 255;

    printf("Hello %s\n", name);
    printf("You are %i years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
    printf("Your number is %c", numbah);
    */

    /*
    double x = fabs(-56);
    printf("%.0lf", x);
    */

    /*
    char name[25];
    int age;

    printf("\nWhat's your name? ");
    // scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you? ");
    scanf("%d", &age);

    printf("%s, you are %d years old", name, age);
    */
    
    const float PI = 3.141;

    /*
    float rad;

    printf("Radius of circle? ");
    scanf("%f", &rad);

    float circ = 2 * rad * PI;
    float area = pow(rad, 2) * PI;

    printf("The Circumference of the circle is %.3f ", circ);
    printf("and the Area is %.3f", area);
    */

    float a;
    float b;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    float c = sqrt(a * a + b * b);

    printf("C is %.3f: ", c);

    return 0;
}
