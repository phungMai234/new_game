#ifndef IDRAW_H_INCLUDED
#define IDRAW_H_INCLUDED

#include<iostream>

#include"Idesign.h"

using namespace std;

/* PROTOTYPE */

/*
 * Function: {void} VeKhoiGach(KhoiGach* pKhoiGach)
 * Brief: Draw block object in ingameScence
 */
void VeKhoiGach(KhoiGach* pKhoiGach);

/*
 * Function: {void} VeKhoiGach(KhoiGach* pKhoiGach)
 * Brief: delete block object in ingameSence
 */
void xoaKhoiGach(KhoiGach* pKhoiGach);

/*
 * Function: {void} Ve_Next(int ID)
 * Brief: draw block object
 */
void Ve_Next(int ID);

/*
 * Function: {void} Xoa_Next()
 * Brief: delete block object
 */
void Xoa_Next();


#endif // IVEXOAKHOIGACH_H_INCLUDED
