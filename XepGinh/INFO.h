#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

#include<iostream>

#include "Iconsole.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

#define MAX 5

using namespace std;

struct INFO
{
    int score;
    int level;
    float speed;
};

/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {void} initGame(INFO* info)
 *
 *@Brief: Initialize the initial parameters for the game: score, level, speed
 *
 *@Param: info: type of pointer of struct name INFO
 *
 *@Return: <none>
 */
void initGame(INFO* info);

/*!
 * Function: {void} updateINFO(INFO* info)
 *
 *@Brief: Update the game parameters: score, level, speed
 *
 *@Param: info: type of pointer of struct name INFO
 *
 *@Return: <none>
 */
void updateINFO(INFO* info);


#endif // INFO_H_INCLUDED
