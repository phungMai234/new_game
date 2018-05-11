#include"IgameScreen.h"


void render()
{
    int i, j;
    for(i = LEFT; i <= LEFT + 10 + 1; i++)
    {
        for(j = TOP; j <= TOP + 18 + 1; j++)
        {
            /* draw row*/
            if((j == TOP + 18 +1 || j == TOP) && i > LEFT && i < LEFT + 10 + 1)
            {
                gotoXY(i, j);
                TextColor(7);
                cout << char(205);
            }

            /* draw column*/
            if((i == LEFT || i == LEFT + 10 + 1) && j > TOP && j < TOP + 18 + 1)
            {
                gotoXY(i, j);
                TextColor(7);
                cout << char(186);
            }
        }
    }

    /* corner left up*/
    gotoXY(LEFT, TOP);
    TextColor(10);
    cout << char(219);

    /* corner right up*/
    gotoXY(LEFT + 10 + 1, TOP);
    TextColor(10);
    cout << char(219);

    /* corner left down */
    gotoXY(LEFT, TOP + 18 + 1);
    TextColor(10);
    cout << char(219);

    /* corner right down*/
    gotoXY(LEFT + 10 + 1, TOP + 18 + 1);
    TextColor(10);
    cout << char(219);

}

void veBangDiem(INFO info)
{
    TextColor(10);
    gotoXY(LEFT + MaxJ + 4, TOP + 6);
    cout << "SCORE: " << info.score << endl;
    gotoXY(LEFT + MaxJ + 4, TOP + 7);
    cout << "LEVEL: " << info.level << endl;
    gotoXY(LEFT + MaxJ + 4, TOP + 8);
    cout << "SPEED: " << info.speed << endl;

}


void disPlayBoard()
{
    int i, j;
    for(i = 0; i < MaxI; i++)
    {
        for(j = 0; j < MaxJ; j++)
        {
            if(Board[i][j] == 1 && i > 4)
            {

                gotoXY(j + LEFT + 1, i + TOP + 1 - 4);
                TextColor(15);
                cout << char(219);
            }
            if(Board[i][j] == 0 && i >= 4)
            {
                gotoXY(j + LEFT + 1, i + TOP + 1 - 4);
                TextColor(0);
                cout << " ";
            }
        }
    }
}

void updateGame(int  row)
{
    int i, j;

    for(i = row; i > 0; i--)
    {
        for(j = 0; j < MaxJ; j++)
        {
            Board[i][j] = Board[i - 1][j];
        }
    }

}

void ganGiaTri(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {

        for(j = 0; j < pKhoiGach->Col; j++)
        {
            if(pKhoiGach->arr[i][j] == 1)
                Board[pKhoiGach->iBoard + i][pKhoiGach->jBoard + j] = 1;
        }
    }
}

