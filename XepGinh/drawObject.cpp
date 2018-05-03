#include"IdrawObject.h"

void VeKhoiGach(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {
            if(pKhoiGach->arr[i][j] == 1 && pKhoiGach->iBoard > 3)
            {
                gotoXY(LEFT + pKhoiGach->jBoard + j + 1, TOP + pKhoiGach->iBoard + i - 3);
                TextColor(15);
                cout << char(219);
            }
        }
    }
}
void xoaKhoiGach(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {
            if(pKhoiGach->arr[i][j] == 1 && pKhoiGach->iBoard > 3)
            {
                gotoXY(LEFT + pKhoiGach->jBoard + j + 1, TOP + pKhoiGach->iBoard + i - 3);
                TextColor(0);
                cout << " ";
            }
        }
    }
}

void Ve_Next(int ID)
{
    KhoiGach *pnext=TaoKhoiGach(ID);

    int iRoot=LEFT+MaxJ + 5;
    int jRoot=TOP + 1;
    for(int i=0;i<pnext->Row;i++)
    {
        for (int j=0;j<pnext->Col;j++)
        {
            if(pnext->arr[i][j]==1)
            {
                TextColor(15);
                gotoXY(iRoot+j,jRoot+i);
                cout << char(219);
            }
        }

    }
    huyKhoiGach(pnext);
}
void Xoa_Next()
{
    int iRoot=LEFT+MaxJ+5;
    int jRoot=TOP + 1;
    for(int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {

                TextColor(0);
                gotoXY(iRoot+j,jRoot+i);
                cout << " ";
        }

    }
}


