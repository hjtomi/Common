#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Create and write a file
    FILE *pF1 = fopen("10100file.txt", "w");
    fprintf(pF1, "Ti csak lapultok a fuben, itt teli kassza\nkicsit nagy lett a szatok hogy odabasszak");
    fclose(pF1);

    // Read a file
    FILE *pF = fopen("10100file.txt", "r");
    char buffer[255];
    while(fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(pF);

    printf("\n\n");

    // Remove file
    if(remove("10100file.txt") == 0){
        printf("File removed");
    }
    else{
        printf("File doesn't exist");
    }

    return 0;
}
