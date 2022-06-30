#include "tictactoe.h"

bool is_num(char *string_answer)
{
    int is_right = 0;
    for (int i = 0; i < strlen(string_answer); i++)
    {
        if(!isdigit(string_answer[i]))
        {
            is_right += 1;
            break;
        }
    }
    return is_right == 0;
}

int choose(void)
{
    char temp[10];
    int r_value;
    do{
        scanf("%s", temp);
    }while(!is_num(temp));
    r_value = atoi(temp);
    return r_value;
    
}

int ai_tic_player(void)
{
    int x, y, num;
    srand(time(NULL));
    do{
        num = 1 + rand() % 9;
        num--;
        y = num / 3;
        x = num % 3;
    }while(tic_array[y][x] < 1);
    return num;
}

int single_player_tic(void)
{
    int x, y, num;
    char bufer[10], temp[1];
    srand(time(NULL));
    do{
        printf("1 ... 9 > ");
        num = choose();
        num--;
        y = num / 3;
        x = num % 3;
    }while(tic_array[y][x] < 1);
    return num;
}
int tic_with_pc_main_easy(void)
{   
    int player = 1, pos, x, y;
    while(1)
    {
        system("clear");
        ticTocMenu();
        if(TicCheckForWin())
        {
            return player;
        }
        if(TicCheckForEqual())
        {
            return -1;
        }
        if (player % 2 == 1)
        {
            pos = single_player_tic();
            // pos--;
            y = pos / 3;
            x = pos % 3;
            tic_array[y][x] = 0;
        }
        else if (player % 2 == 0)
        {
            pos = ai_tic_player();
            y = pos / 3;
            x = pos % 3;
            // pos--;
            tic_array[y][x] = -1;            
        }
        player++;
    }
}


void tic_single_menu(void)
{
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("MM         1. Easy                         MM\n");
    printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
}

int tic_rand_play(void)
{
    system("clear");
    int choice, result;
    tic_single_menu();
    printf("> ");
    choice = choose();
    if(choice == 1)
        result = tic_with_pc_main_easy();
    resetArrayTic();
    return result;
}