
#include"Icheck.h"

/* CODE */

int kiemTra(KhoiGach* pKhoiGach, INFO* info)
{
    int i, j, countB = 0;

    /*Game Over*/
    if(pKhoiGach->iBoard <= 4)
        return -1;


    /* Win Game*/
    if(info->score >= 5000)
        return 2;


    /* check*/
    for(i = 0; i < MaxI; i++)
    {
        countB = 0;
        for(j = 0; j < MaxJ; j++)
        {
            // hoi
            if(Board[pKhoiGach->iBoard + i][j] == 1) // soa k phai la Board[i][j] == 1 vì lúc nay chưa gan gia tri cho bang
            {
                countB++;
            }
        }
        /* get score*/
        if(countB == MaxJ)
        {
            /*update new score, level,speed*/
            updateINFO(info);

            /* update located row of object ingame*/
            updateGame(pKhoiGach->iBoard + i);
            disPlayBoard();

        }
    }
    return 1;
}

bool playGame()
{
    clrscr();

    int Id = randomObject();

    /* creat origin brick block */

    KhoiGach * curr;
    curr = TaoKhoiGach(Id);

    /* creat ID random to creat next brick block */

    int IDKhoiTiepTheo = randomObject();

    /* creat origin info*/

    INFO info;
    initGame(&info);

    char key;
    clock_t Start, End;

    /* creat origin matrix */

    for(int i = 1; i <= 20; i++)
    {
        for(int j = 1; j <= 10; j++)
            Board[i][j] = 0;
    }

    /* play game*/

    render();
    do
    {
        veBangDiem(info);
        VeKhoiGach(curr);
        Xoa_Next();
        Ve_Next(IDKhoiTiepTheo);

        Start = clock();

        do
        {
            if(kbhit())
            {
                /* choice key from keyBoard */
                key = _getch();

                xoaKhoiGach(curr);

                if( key == 'a' || key == 'A' || key == key_Left)
                    moveLeftObject(curr);

                if( key == 'd' || key == 'D' || key == key_Right)
                    moveRightObject(curr);

                if( key == 's' || key == 'S' || key == key_Down)
                    moveDownObject(curr);

                if( key == 'w' || key == 'W' || key == key_Up)
                    rotateObject(curr);


                VeKhoiGach(curr);
            }

            End = clock();

        }
        while(float(End - Start)/ CLK_TCK < info.speed);

        xoaKhoiGach(curr);

        if(moveDownObject(curr) == false)
        {
            /* Assigns values to the matrix for falling blocks*/
            ganGiaTri(curr);

            /* check to get score*/
            int result = kiemTra(curr, &info);
            if(result == -1 || result == 2)
                break;

            /* free memory*/
            huyKhoiGach(curr);

            /* creat next brick block */
            curr = TaoKhoiGach(IDKhoiTiepTheo);
            IDKhoiTiepTheo = randomObject();

            /* assign value to matrix*/
            disPlayBoard();
        }

    }
    while(1);

    huyKhoiGach(curr);

    /* Win Game*/ // trang tri them
    if(info.score >= 5000)
    {
        TextColor(13);
        gotoXY(LEFT + MaxJ + 20, TOP + 10);
        cout << "CONGRATULATION! YOU WIN";
    }
    /*Show core, end game*/
    else
    {
        TextColor(14);
        gotoXY(LEFT + MaxJ + 20, TOP + 10);
        cout << "Game Over\n";
        gotoXY(LEFT + MaxJ + 20, TOP + 11);
        cout << "Your core :\n";
        gotoXY(LEFT + MaxJ + 32, TOP + 11);
        cout << info.score << endl;

    }

    /* Ask player want to continue game*/

    gotoXY(LEFT + MaxJ + 20, TOP + 14);
    cout << "Do you want to back Main menu? (Y/N) \n";
    char choice;

    /* get character from keyBoard */

    choice = _getch();

    if(choice == 'N' || choice == 'n')
        return false;
    return true;
}
