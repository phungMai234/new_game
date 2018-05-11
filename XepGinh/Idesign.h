#ifndef IDESIGN_H_INCLUDED
#define IDESIGN_H_INCLUDED

#include "Iconsole.h"

/* library to call random*/
#include<ctime>
#include<cstdlib>

#include<iostream>

#define TOP 4
#define LEFT 4

#define MaxI 22
#define MaxJ 10

using namespace std;

struct KhoiGach
{
    /* pointer to pointer array contain objects */
    int **arr;
    /* Row, col go with each of object */
    int Row, Col;
    /* located of object */
    int iBoard, jBoard;
};


/* PROTOTYPE */

/*
 * Function: {KhoiGach*} TaoKhoiGach(int ID)
 * Brief: Design a brick allow ID
 */
KhoiGach* TaoKhoiGach(int ID);

/*
 * Function: {void} huyKhoiGach(KhoiGach* pKhoiGach)
 * Brief: Free up memory containing blocks of tiles
 */
void huyKhoiGach(KhoiGach* pKhoiGach);

/*
 * Function: {int} randomObject()
 * Brief: Random ID of each brick
 */
int randomObject();


#endif // ICREATBRICK_H_INCLUDED
