#include <stdio.h>
#include <stdlib.h>
void sign_up_fail(void)
{
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("!! YOU HAVE ENTERED WRONG PASSWORD OR USERNAME !!\n");
    printf("!!    TRY AGAIN IF YOU HAVE SIGNED UP BEFORE   !!\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}
void sign_up_success(void)
{
    printf("sssssssssssssssssssssssssssssssssssssssssssssssss\n");
    printf("ss      YOU HAVE SUCCESSFULLY SIGNED UP        ss\n");
    printf("sssssssssssssssssssssssssssssssssssssssssssssssss\n");
}

void game_menu(void)
{
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
printf("-=     1. Question and answer                       -=\n");
printf("-=     2. Find the number                           -=\n");
printf("-=     3. Sudoko                                    -=\n");
printf("-=     4. Tic Tac Toe                               -=\n");
printf("-=     5. Highscore                                 -=\n");
printf("-=     6. Your Homepage                             -=\n");
printf("-=     7. Exit                                      -=\n");
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
void head_menu(void)
{
printf("******************************************************\n");
printf("*          Welcome to 'Ilmni Sev' game               *\n");
printf("*     1. Sign up                                     *\n");
printf("*     2. Login to you account                        *\n");
printf("*     3. Exit                                        *\n");
printf("******************************************************\n");
}
void menu_think(void)
{
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("<>            Welcome to Think and Answer game            <>\n");
    printf("<>            PRESS 1 TO ANSWER LETTER BY LETTER          <>\n");
    printf("<>            PRESS 0 TO ANSWER AT ONCE(chance = 1)       <>\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
}
void you_lost(void)
{
    printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
    printf("&&                 YOU LOST!!!                            &&\n");
    printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
}

void wring_choice(void)
{
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("!!!    PLEASE CHOOSE 0 OR 1 NOT ANOTHER DIGIT            !!!\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}

void question_1(void)
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~           What is the capital of Uzbekistan?              ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void question_2(void)
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~           The Machine code is close to ....               ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void question_3(void)
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~          The best e-car manifacturing company?            ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void question_4(void)
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~     What is the biggest search engine in the world?       ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void question_5(void)
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~     What is the biggest country in the world              ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void question_6(void)
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~     What is the most common protocol between computers?   ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void find_num_menu(void)
{
    printf("~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n");
    printf("~+~+   1. Easy      -> 0 ... 100                      ~+~+~\n");
    printf("~+~+   2. Middle    -> 0 ... 1000                     ~+~+~\n");
    printf("~+~+   3. Normal    -> 0 ... 10000                    ~+~+~\n");
    printf("~+~+   4. Hard      -> 0 ... 100000                   ~+~+~\n");
    printf("~+~+   5. Expert    -> 0 ... 10000000                 ~+~+~\n");
    printf("~+~+   6. Exit                                        ~+~+~\n");
    printf("~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n");
}
void  requirement_of_find_num(void)
{
    printf("UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU\n");
    printf("UU  This games is costly if you invest exact amount of money UU\n");
    printf("UU  Here is the return amount (invested + invested * 0.5)    UU\n");
    printf("UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU\n");
}
void find_low_breaked(void)
{
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("!! As you break the low of the game     !!\n");
    printf("!! your credits has been decresed by 10 !!\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}

void you_win(void)
{
    printf("_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
    printf("_+                     YOU WIN...                       _+\n");
    printf("_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
}
void draw(void)
{
    printf("_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
    printf("_+                        DRAW                          _+\n");
    printf("_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
}