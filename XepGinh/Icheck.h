#ifndef ICHECK_H_INCLUDED
#define ICHECK_H_INCLUDED


#include<conio.h>

#include"ImoveObject.h"
#include"INFO.h"
#include"IgameScreen.h"
#include"IdrawObject.h"

/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {int} kiemTra(KhoiGach *pKhoiGach, INFO* info)
 *
 *@Brief: check matrix after each blocks brick down, eat it
 *
 *@Param: pKhoiGach: pointer type of KhoiGach
 *        info: pointer type of INFO
 *
 *@Return: -1: Game over
 *          2: Win Game
 *          1: Game continue
 */
int kiemTra(KhoiGach* pKhoiGach, INFO* info);

/*!
 * Function: {bool} ingameSence()
 *
 *@Brief: Player play game
 *
 *@Param:<none>
 *
 *@Return: true: play a new game
 *         false: exist game
 */
bool ingameSence();




#endif // ICHECK_H_INCLUDED
