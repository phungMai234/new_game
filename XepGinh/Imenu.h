#ifndef IMENU_H_INCLUDED
#define IMENU_H_INCLUDED

#include "Iconsole.h"

#include<iostream>

/* library to call _getch*/
#include<conio.h>

using namespace std;

/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {void} mainMenu()
 *
 *@Brief: draw main menu of option
 *
 *@Param: <none>
 *@Return: <none>
 */
void mainMenu();

/*!
 * Function: {bool} help()
 *
 *@Brief: show guidance to play game
 *
 *@Param: <none>
 *@Return: true: back main menu
 *         false: exist
 */
bool help();

/*!
 * Function: {bool} credit()
 *
 *@Brief: show infomation of author
 *
 *@Param: <none>
 *@Return: true: back main menu
 *         false: exist
 */
bool credit();

#endif // IMENU_H_INCLUDED
