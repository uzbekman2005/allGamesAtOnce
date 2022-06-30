#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int tic_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };

void resetArrayTic(void)
{
    int inde = 1;
    for (int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) 
        {
            tic_array[i][j] = inde;
            inde++;
        }  
}

bool TicCheckForEqual(void)
{
    int is = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if(tic_array[i][j] > 0)
                is++;
    return is == 0;
}

bool TicCheckForWin(void)
{
    if (tic_array[0][0] == tic_array[1][1] && tic_array[1][1] == tic_array[2][2])
        return true;
    else if(tic_array[0][0] == tic_array[0][1] && tic_array[0][1] == tic_array[0][2])
        return true;    
    else if(tic_array[1][0] == tic_array[1][1] && tic_array[1][1] == tic_array[1][2])
        return true;
    else if(tic_array[2][0] == tic_array[2][1] && tic_array[2][1] == tic_array[2][2])
        return true;
    else if(tic_array[0][2] == tic_array[1][1] && tic_array[1][1] == tic_array[2][0])
        return true;
    else if(tic_array[0][0] == tic_array[1][0] && tic_array[1][0] == tic_array[2][0])
        return true;
    else if(tic_array[0][1] == tic_array[1][1] && tic_array[1][1] == tic_array[2][1])
        return true;
    else if(tic_array[0][2] == tic_array[1][2] && tic_array[1][2] == tic_array[2][2])
        return true;
    else
        return false;
}   



void ticTocMenu(void)
{
    printf("\n%s|---|---|---|\n", KGRN);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            if (tic_array[i][j] != 0 && tic_array[i][j] != -1)
            {
                if (j == 0)
                    printf("%s|   |", KGRN);
                else
                    printf("   %s|", KGRN);
            }
            else{
                if (j == 0)
                {
                    if (tic_array[i][j] == -1)
                        printf("| %sX%s |", KRED, KGRN );
                    else 
                        printf("| %sO%s |", KWHT, KGRN );
                }
                else
                {
                    if(tic_array[i][j] == -1)
                        printf(" %sX%s |", KRED, KGRN);
                    else 
                        printf(" %sO%s |", KWHT, KGRN);   
                }
            }
        printf("\n%s|---|---|---|%s\n", KGRN, KNRM);
    }
}

int play_tic_tac(void)
{
    int playing = 1;
    int choice_tic_y, choice_tic_x;
    while(1)
    {
        system("clear");
        if(TicCheckForWin())
        {
            return playing;
            ticTocMenu();
        }
        if(TicCheckForEqual())
        {
            return -1;
            ticTocMenu();
            
        }
        ticTocMenu();
        printf("x y ->");
        char str[10];
        char x[2], y[2];
        scanf("%s %s", x, y);
        if(isalnum(x[0]) && isalnum(y[0]))
        {
            choice_tic_x = atoi(x);
            choice_tic_y = atoi(y);
        }
        choice_tic_x--;
        choice_tic_y--;
        if(tic_array[choice_tic_y][choice_tic_x] == -1 || tic_array[choice_tic_y][choice_tic_x] == 0)
            continue;
        if(playing % 2 == 0)
            tic_array[choice_tic_y][choice_tic_x] = -1;
        else
            tic_array[choice_tic_y][choice_tic_x] = 0;
        playing++;
    }
}
int TicTacToicMain(void)
{
    return play_tic_tac();   
}

void TicMenu(void)
{
    printf("**********************************************\n");
    printf("**    1. Multiplayer                        **\n");
    printf("**    2. Single player                      **\n");
    printf("**    3. Exit                               **\n");
    printf("**    YOURS --> O                           **\n");
    printf("**********************************************\n");
}