#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"


int arr[9][9], arr_right[9][9], array_in_process[9][9];


void congratulation(void)
{
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$         CONGRATULATIONS  YOUR ANSWER IS CORRECT            $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}
bool check_for_win()
{
    int is = 0;
    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            if(array_in_process[i][j] != arr_right[i][j])
            {
                is += 1;
                break;
            }
    return is == 0;
}
void show_table()
{
    int n = 9;

   
    printf("%s______________________________________________%s\n", KBLU, KMAG);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                if (array_in_process[i][j] == 0)
                {
                    printf("%s|    %s|%s",KBLU, KYEL, KMAG);
                }
                else
                {
                    if (arr[i][j] == arr_right[i][j])
                        printf("%s|%s%2d %s |%s", KBLU, KCYN, array_in_process[i][j], KYEL, KMAG);
                    else if (array_in_process[i][j] == arr_right[i][j])
                        printf("%s|%s%2d %s |%s", KBLU, KGRN, array_in_process[i][j], KYEL, KMAG);
                    else
                        printf("%s|%s%2d %s |%s", KBLU, KRED, array_in_process[i][j], KYEL, KMAG);
                }
            }
            else 
            {
                if (array_in_process[i][j] == 0)
                {
                    if (j == 2 || j == 5 || j == 8)
                        printf("   %s |",  KBLU);
                    else 
                        printf("   %s |",  KYEL);

                }
                else if (array_in_process[i][j] == arr_right[i][j])
                {
                    if(j == 2 || j == 5 || j == 8)
                    {
                        if (arr[i][j] == arr_right[i][j])
                            printf("%s%2d %s |%s", KCYN,array_in_process[i][j], KBLU, KMAG);
                        else
                            printf("%s%2d %s |%s", KGRN,array_in_process[i][j], KBLU, KMAG);
                    }
                    else 
                    {
                        if (arr[i][j] == arr_right[i][j])
                            printf("%s%2d %s |%s", KCYN,array_in_process[i][j], KYEL, KMAG);
                        else
                            printf("%s%2d %s |%s", KGRN,array_in_process[i][j], KYEL, KMAG);
                    }
                }
                else
                {
                    if (j == 2 || j == 5 || j == 8)
                        printf("%s%2d %s |%s",KRED, array_in_process[i][j], KBLU, KMAG);
                    else
                        printf("%s%2d %s |%s",KRED, array_in_process[i][j], KYEL, KMAG);
                }
            }
        }
        if(i < 8)
        {
            if (i == 2 || i == 5 || i == 8)
            printf("\n%s|----|----|----|----|----|----|----|----|----|\n%s", KBLU, KMAG);
            else
            printf("\n%s|%s----|----|----%s|%s----|----|----%s|%s----|----|----%s|\n%s", KBLU, KYEL,KBLU, KYEL, KBLU,KYEL, KBLU, KMAG);
        }
    }
    printf("\n%s|____%s|%s____%s|%s____|____%s|%s____%s|%s____|____%s|%s____%s|%s____|%s\n", KBLU,KYEL, KBLU,KYEL, KBLU,KYEL,KBLU,KYEL,KBLU,KYEL,KBLU,KYEL,KBLU, KMAG);
}


bool input_num(void)
{
    char x[10],y[10],value[10];
    int x_i, y_i, value_i;
    printf("Input: input 'x y value'and press Enter button\n");
    scanf("%s %s %s", x,y,value);
    if(isalnum(x[0]) && isalnum(y[0]) && isalnum(value[0]))
    {
        x_i = atoi(x);
        y_i = atoi(y);
        value_i = atoi(value);
        y_i--;
        x_i--;
        if(value_i > 9 || value_i < 1)
            return false;
        if(array_in_process[y_i][x_i] != arr_right[y_i][x_i])
            array_in_process[y_i][x_i] = value_i;  
        system("clear");
        show_table();
    }
    else 
        return false;
}

void given_arr()
{
    arr[0][0] = 0;
    arr[0][1] = 7;
    arr[0][2] = 3;
    arr[0][3] = 2;
    arr[0][4] = 0;
    arr[0][5] = 4;
    arr[0][6] = 6;
    arr[0][7] = 9;
    arr[0][8] = 1;

    arr[1][0] = 0;
    arr[1][1] = 2;
    arr[1][2] = 8;
    arr[1][3] = 0;
    arr[1][4] = 0;
    arr[1][5] = 6;
    arr[1][6] = 0;
    arr[1][7] = 0;
    arr[1][8] = 7;

    arr[2][0] = 0;
    arr[2][1] = 0;
    arr[2][2] = 6;
    arr[2][3] = 1;
    arr[2][4] = 0;
    arr[2][5] = 7;
    arr[2][6] = 0;
    arr[2][7] = 0;
    arr[2][8] = 8;

    arr[3][0] = 0;
    arr[3][1] = 1;
    arr[3][2] = 5;
    arr[3][3] = 7;
    arr[3][4] = 6;
    arr[3][5] = 3;
    arr[3][6] = 0;
    arr[3][7] = 2;
    arr[3][8] = 4;

    arr[4][0] = 6;
    arr[4][1] = 0;
    arr[4][2] = 0;
    arr[4][3] = 0;
    arr[4][4] = 0;
    arr[4][5] = 0;
    arr[4][6] = 8;
    arr[4][7] = 7;
    arr[4][8] = 0;

    arr[5][0] = 7;
    arr[5][1] = 0;
    arr[5][2] = 0;
    arr[5][3] = 9;
    arr[5][4] = 0;
    arr[5][5] = 0;
    arr[5][6] = 0;
    arr[5][7] = 0;
    arr[5][8] = 0;

    arr[6][0] = 3;
    arr[6][1] = 0;
    arr[6][2] = 1;
    arr[6][3] = 6;
    arr[6][4] = 0;
    arr[6][5] = 0;
    arr[6][6] = 0;
    arr[6][7] = 0;
    arr[6][8] = 0;

    arr[7][0] = 2;
    arr[7][1] = 8;
    arr[7][2] = 0;
    arr[7][3] = 5;
    arr[7][4] = 4;
    arr[7][5] = 9;
    arr[7][6] = 3;
    arr[7][7] = 0;
    arr[7][8] = 0;

    arr[8][0] = 0;
    arr[8][1] = 6;
    arr[8][2] = 0;
    arr[8][3] = 8;
    arr[8][4] = 0;
    arr[8][5] = 0;
    arr[8][6] = 0;
    arr[8][7] = 0;
    arr[8][8] = 0;

}
void array_right_func()
{
    
    arr_right[0][0] = 5;
    arr_right[0][1] = 7;
    arr_right[0][2] = 3;
    arr_right[0][3] = 2;
    arr_right[0][4] = 8;
    arr_right[0][5] = 4;
    arr_right[0][6] = 6;
    arr_right[0][7] = 9;
    arr_right[0][8] = 1;
    
    arr_right[1][0] = 1;
    arr_right[1][1] = 2;
    arr_right[1][2] = 8;
    arr_right[1][3] = 3;
    arr_right[1][4] = 9;
    arr_right[1][5] = 6;
    arr_right[1][6] = 5;
    arr_right[1][7] = 4;
    arr_right[1][8] = 7;
    
    arr_right[2][0] = 9;
    arr_right[2][1] = 4;
    arr_right[2][2] = 6;
    arr_right[2][3] = 1;
    arr_right[2][4] = 5;
    arr_right[2][5] = 7;
    arr_right[2][6] = 2;
    arr_right[2][7] = 3;
    arr_right[2][8] = 8;
    
    arr_right[3][0] = 8;
    arr_right[3][1] = 1;
    arr_right[3][2] = 5;
    arr_right[3][3] = 7;
    arr_right[3][4] = 6;
    arr_right[3][5] = 3;
    arr_right[3][6] = 9;
    arr_right[3][7] = 2;
    arr_right[3][8] = 4;

    arr_right[4][0] = 6;
    arr_right[4][1] = 9;
    arr_right[4][2] = 2;
    arr_right[4][3] = 4;
    arr_right[4][4] = 1;
    arr_right[4][5] = 5;
    arr_right[4][6] = 8;
    arr_right[4][7] = 7;
    arr_right[4][8] = 3;

    arr_right[5][0] = 7;
    arr_right[5][1] = 3;
    arr_right[5][2] = 4;
    arr_right[5][3] = 9;
    arr_right[5][4] = 2;
    arr_right[5][5] = 8;
    arr_right[5][6] = 1;
    arr_right[5][7] = 6;
    arr_right[5][8] = 5;
    arr_right[6][0] = 3;
    arr_right[6][1] = 5;
    arr_right[6][2] = 1;
    arr_right[6][3] = 6;
    arr_right[6][4] = 7;
    arr_right[6][5] = 2;
    arr_right[6][6] = 4;
    arr_right[6][7] = 8;
    arr_right[6][8] = 9;
    arr_right[7][0] = 2;
    arr_right[7][1] = 8;
    arr_right[7][2] = 7;
    arr_right[7][3] = 5;
    arr_right[7][4] = 4;
    arr_right[7][5] = 9;
    arr_right[7][6] = 3;
    arr_right[7][7] = 1;
    arr_right[7][8] = 6;
    arr_right[8][0] = 4;
    arr_right[8][1] = 6;
    arr_right[8][2] = 9;
    arr_right[8][3] = 8;
    arr_right[8][4] = 3;
    arr_right[8][5] = 1;
    arr_right[8][6] = 7;
    arr_right[8][7] = 5;
    arr_right[8][8] = 2;

}

int main_sudoko_game()
{
    int is_win = 0;
    array_right_func();
    given_arr();
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            array_in_process[i][j] = arr[i][j];
    
    int n = 9;
    bool res;
    show_table();
    while(1)
    {
        res = input_num();
        if (check_for_win() == true)
        {
            congratulation();
            is_win = 1;
            break;
        }
    }
    return is_win;
}