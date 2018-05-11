
#ifndef ICHECK_H_INCLUDED
#define ICHECK_H_INCLUDED


#include<conio.h>

#include"IMove.h"
#include"INFO.h"
#include"IBoard.h"
#include"IDraw.h"

/* PROTOTYPE */

/*
 * Function: {int} kiemTra(KhoiGach *pKhoiGach, INFO* info)
 * Brief: check matrix after each blocks brick down, eat it
 */
int kiemTra(KhoiGach* pKhoiGach, INFO* info);

/*
 * Function: {bool} playGame()
 * Brief: Player play game
 */
bool playGame();




#endif // ICHECK_H_INCLUDED
