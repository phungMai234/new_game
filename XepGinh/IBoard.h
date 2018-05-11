#ifndef IBOARD_H_INCLUDED
#define IBOARD_H_INCLUDED

#include "Iconsole.h"
#include"INFO.h"
#include"Idesign.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

extern int Board[MaxI][MaxJ];


#include<iostream>

using namespace std;

/* PROTOTYPE */

/*
 * Function: {void} render()
 * Brief: drawing frames to display up screen
 */
void render();

/*
 * Function: {void} veBangDiem(INFO)
 * Brief: drawing table current game information
 */
void veBangDiem(INFO info);

/*
 * Function: {void} disPlayBoard()
 * Brief:  status value assignment for a battle
 */
void disPlayBoard();

/*
 * Function: {void} updateGame(int row)
 *@Brief:  update the following status of matrix after getting point
 */
void updateGame(int row);

/*
 * Function: {void} ganGiaTri(KhoiGach* pKhoiGach)
 *@Brief:  update the following status of matrix after block brick go down
 */
void ganGiaTri(KhoiGach* pKhoiGach);

#endif // IMAP_H_INCLUDED
