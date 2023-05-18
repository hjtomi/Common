#include <stdio.h>
#include <string.h>

struct Player{
    char name[15];
    int score;
};

// typedef = reserved keyword that gives an existing datatype a "nickname"
typedef char len25str[25];

typedef struct{
    char name[15];
    char password[12];
    int id;
} User; 

int main(){
    struct Player p1;
    struct Player p2;

    strcpy(p1.name, "hj");
    strcpy(p2.name, "gb");

    p1.score = 69;
    p2.score = 420;

    printf("%s, %d\n", p1.name, p1.score);
    printf("%s, %d", p2.name, p2.score);

    struct Player p3 = {"Chad", 505};

    len25str name = "thomas";
    User u1 = {"bd", "mypassword", 3674859};

    return 0;
}