#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Hello ";
    char string2[] = "world!";
    strncpy(string1, string2, 2);
    strnset(string1, 'l', 2);
    printf("%s\n", strncat(string1, string2, 4));

    int len = strlen(string1);
    
    char string3[] = "aSdFmuVIE";
    char string4[] = "AsDfMOvie";
    if (strnicmp(string3, string4, 5) == 0){
        printf("Hooray!");
    }
    else{
        printf("Meh");
    }

    return 0;
}