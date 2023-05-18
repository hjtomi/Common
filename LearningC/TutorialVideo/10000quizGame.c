#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][100] = {"When was I born? | A: 2005 | B: 2006 | C. 2007 | D. 2008 | ",
                             "In what month? | A: April | B: May | C. June | D. July | ",
                             "At what date? | A: 17 | B: 23 | C. 25 | D. 27 | "};

    char answers[] = {'B', 'C', 'D'};

    char guess;
    int correctAm = 0;

    printf("Please provide your answer in uppercase");

    for(int i = 0; i < sizeof(questions)/sizeof(questions[0]); i++){
        printf("%s\n", questions[i]);
        scanf(" %c", &guess);
        if(guess == answers[i]){
            printf("Correct\n");
            correctAm += 1;
        }
    }

    printf("You have got (%d/%d) right", correctAm, sizeof(questions)/sizeof(questions[0]));

    return 0;
}
