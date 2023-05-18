/* 
a CLI account manager.
You can register accounts and log into them where you can add text
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main(){
    // Create a file (if it already exists it does nothing)
    FILE *pNewFile = fopen("accounts.txt", "a");
    fclose(pNewFile);

    // Create a variable that will store the user choice
    char choice;
    while(1){
        // Print the options (register / login)
        printf("Register or login? (R / L): ");
        scanf(" %c", &choice);
        choice = toupper(choice);

        // Check if choice is E (exit)
        if (choice == 'E')
        {
            break;
        }
        else if (choice == 'R')
        {
            // --- REGISTER ---
            // Ask for a username and a password
            char username[15];
            char password[12];
            printf("Enter your username: ");
            scanf("%s", &username);
            printf("Enter a password: ");
            scanf("%s", &password);

            // If there are accounts in the file, check if the username is duplicated or not
            FILE  *pFile = fopen("accounts.txt", "a+");
            char buffer[255];
            int lines = 0;
            int usernameAm = 0;
            char usernames[9][15];
            bool error = false;
            while(fgets(buffer, 255, pFile) != NULL)
            {
                if (lines % 3 == 0){
                    buffer[strlen(buffer) - 1] = '\0';
                    strcpy(usernames[usernameAm], buffer);
                    usernameAm++;
                }

                lines++;
            }
            for (int i = 0; i < sizeof(usernames)/sizeof(usernames[0]); i++)
            {
                if (strcmp(usernames[i], username) == 0){
                    printf("Username already exists.\n");
                    error = true;
                    break;
                }
            }

            // create 3 new lines in the file starting with how many accounts already exist
            if (!error){
                fprintf(pFile, "%s\n%s\n...\n", username, password);
                fflush(pFile);
            }

            fclose(pFile);
        }
        else if(choice == 'L')
        {
            // --- LOGIN ---
            // Ask for username and password
            char username[15];
            char password[12];
            printf("Username: ");
            scanf("%s", &username);
            printf("Password: ");
            scanf("%s", &password);

            // Check if username exists in the file
            // Check if password is correct
            char buffer[255];
            int lines = 0;
            char usernames[9][15];
            char passwords[9][12];
            char texts[9][255];
            int usernameAm = 0;
            int passwordAm = 0;
            int textAm = 0;
            FILE *pFile = fopen("accounts.txt", "a+");
            while(fgets(buffer, 255, pFile) != NULL)
            {
                if (lines % 3 == 0)
                {
                    buffer[strlen(buffer) - 1] = '\0';
                    strcpy(usernames[usernameAm], buffer);
                    usernameAm++;
                }
                else if (lines % 3 == 1)
                {
                    buffer[strlen(buffer) - 1] = '\0';
                    strcpy(passwords[passwordAm], buffer);
                    passwordAm++;
                }
                else if (lines % 3 == 2)
                {
                    buffer[strlen(buffer) - 1] = '\0';
                    strcpy(texts[textAm], buffer);
                    textAm++;
                }
                lines++;
            }

            int correspondingText;
            bool access = false;
            for (int i = 0; i < sizeof(usernames)/sizeof(usernames[0]); i++)
            {
                // printf("%s - %s", usernames[i], password[i]);
                if(strcmp(usernames[i], username) == 0 && strcmp(passwords[i], password) == 0){
                    printf("Access granted.\n");
                    access = true;
                    correspondingText = i;
                    break;
                }
            }

            fclose(pFile);

            // Print out the current text the user has
            if(access){
                printf("%s\n", texts[correspondingText]);
                // Check user input. After enter is pressed, all new text should be added to the file
                char newText[255];
                scanf(" ");
                fgets(newText, 255, stdin);

                FILE *pFileAppend = fopen("accounts.txt", "w");
                for (int i = 0; i < usernameAm; i++)
                {
                    if (i == correspondingText){
                        strcat(texts[i], newText);
                        fprintf(pFileAppend, "%s\n%s\n%s", usernames[i], passwords[i], texts[i]);
                        fflush(pFileAppend);
                    }
                    else{
                        fprintf(pFileAppend, "%s\n%s\n%s\n", usernames[i], passwords[i], texts[i]);
                        fflush(pFileAppend);
                    }
                }
                fclose(pFileAppend);
            }
            else{
                printf("Wrong username or password\n");
            }

        }
    }

    return 0;
}