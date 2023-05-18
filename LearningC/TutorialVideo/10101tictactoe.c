#include <stdio.h>
#include <stdbool.h>

void drawBoard(char places[]){
    printf("\n/-----------\\\n| %c | %c | %c |     0   1   2\n|-----------|\n| %c | %c | %c |     3   4   5\n|-----------|\n| %c | %c | %c |     6   7   8\n\\-----------/\n", places[0], places[1], places[2], places[3], places[4], places[5], places[6], places[7], places[8]);
}

int main(){
    int winningPositions[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, 
                                  {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
                                  {0, 4, 8}, {2, 4, 6}};

    char places[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};

    int turns = 0;
    bool full;
    while(1){
        drawBoard(places);

        int place;
        if (turns % 2 == 0)
        {
            printf("Where do you want to mark X? ");

            scanf("%d", &place);
            if(place == -1){
                break;
            }
            if (places[place] != '-'){
                printf("Place already filled. Your turn repeats");
                turns--;
            }
            else{
                places[place] = 'X';
            }


            printf("\n---------------\n");
        }
        else
        {
            printf("Where do you want to mark O? ");

            scanf("%d", &place);
            if(place == -1){
                break;
            }
            if (places[place] != '-'){
                printf("Place already filled. Your turn repeats");
                turns--;
            }
            else{
                places[place] = 'O';
            }

            printf("\n---------------\n");
        }

        for(int i = 0; i < sizeof(winningPositions)/sizeof(winningPositions[0]); i++)
        {
            if (places[winningPositions[i][0]] == places[winningPositions[i][1]] && places[winningPositions[i][0]] == places[winningPositions[i][2]] && places[winningPositions[i][1]] == places[winningPositions[i][2]] &&places[winningPositions[i][0]] != '-'){
                printf("GG");
                goto gameover;
            }; 
        }

        turns++;

        if (turns == 9){
            goto gameover;
        }
    }

gameover:
    drawBoard(places);

    return 0;
}