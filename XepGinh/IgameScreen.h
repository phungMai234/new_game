#ifndef IMAP_H_INCLUDED
#define IMAP_H_INCLUDED

#include "Iconsole.h"
#include"INFO.h"
#include"IdesignObject.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

extern int Board[MaxI][MaxJ];


#include<iostream>

using namespace std;
// drawing frames to display up screen
/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {void} render()
 *
 *@Brief: drawing frames to display up screen
 *
 *@Param: <none>
 *
 *@Return: <none>
 */
void render();

/*!
 * Function: {void} veBangDiem(INFO)
 *
 *@Brief: drawing table current game information
 *
 *@Param: INFO: infomation of game: score, level, speed
 *
 *@Return: <none>
 */
void veBangDiem(INFO);

/*!
 * Function: {void} disPlayBoard()
 *
 *@Brief:  status value assignment for a battle
 *
 *@Param: <none>
 *
 *@Return: <none>
 */
void disPlayBoard();

/*!
 * Function: {void} updateGame(int row)
 *
 *@Brief:  update the following status of matrix after getting point
 *
 *@Param: row: row of matrix
 *
 *@Return: <none>
 */
void updateGame(int row);

/*!
 * Function: {void} ganGiaTri(KhoiGach* pKhoiGach)
 *
 *@Brief:  update the following status of matrix after block brick go down
 *
 *@Param: pKhoiGach: pointer type of KhoiGach
 *
 *@Return: <none>
 */
void ganGiaTri(KhoiGach* pKhoiGach);

#endif // IMAP_H_INCLUDED
