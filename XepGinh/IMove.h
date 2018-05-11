#ifndef IMOVE_H_INCLUDED
#define IMOVE_H_INCLUDED

#include"Idesign.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

/*matrix*/
extern int Board[MaxI][MaxJ];


/* PROTOTYPE */

/*
 * Function: {bool} inside(int i, int j)
 * Brief: check small object in matrix
 */
bool inside(int i, int j);

/*
 * Function: {bool} left(int i, int j)
 * Brief: check small object move left (yes/no)
 */
bool left(int i, int j);

/*
 * Function: {bool} right(int i, int j)
 * Brief: check small object move right (yes/no)
 */
bool right(int i, int j);

/*
 * Function: {bool} down(int i, int j)
 * Brief: check small object go down (yes/no)
 */
bool down(int i, int j);

/*
 * Function: {void} moveLeftObject(KhoiGach* pKhoiGach)
 * Brief: move the block object go to the left
 */
void moveLeftObject(KhoiGach* pKhoiGach);

/*
 * Function: {void} moveRightObject(KhoiGach* pKhoiGach)
 * Brief: move the block object go to the right
 */
void moveRightObject(KhoiGach* pKhoiGach);

/*
 * Function: {bool} moveDownObject(KhoiGach* pKhoiGach)
 * Brief: Move the falling blocks
 */
bool moveDownObject(KhoiGach* pKhoiGach);

/*
 * Function: {void} rotateObject(KhoiGach* pKhoiGach)
 * Brief: Turn the brick block at an angle of 90 degrees
 */
void rotateObject(KhoiGach* pKhoiGach);


#endif // IMOVEBRICK_H_INCLUDED
