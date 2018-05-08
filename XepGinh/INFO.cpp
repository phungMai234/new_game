
#include"INFO.h"

void initGame(INFO* info)
{
    info->score = 0;
    info->level = 1;
    info->speed = 0.4;
}

void updateINFO(INFO* info)
{
    /* add score*/
    info->score+=100;

    int i;

    /* check to get a new level and speed */

    for(i = 1; i <= MAX; i++)
    {
        if(info->score == 1000 * i)
        {
            info->level++;
            info->speed-=0.05;
        }
    }
}


