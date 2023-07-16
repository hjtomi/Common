#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char text[100];
    while (1)
    {
        if (stricmp(text, "quit") == 0)
        {
            break;
        }

        fgets(text, 100, stdin);
        text[strcspn(text, "\n")] = '\0';
        printf("text: %s\n", text);
    }
    return 0;
}

