#ifndef IMOVEBRICK_H_INCLUDED
#define IMOVEBRICK_H_INCLUDED

#include"IdesignObject.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4


extern int Board[MaxI][MaxJ];


bool inside(int, int);
bool left(int, int);
bool right(int, int);
bool down(int , int);

void moveLeftObject(KhoiGach*);
void moveRightObject(KhoiGach*);
bool moveDownObject(KhoiGach*);
void rotateObject(KhoiGach*);




#endif // IMOVEBRICK_H_INCLUDED
