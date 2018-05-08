
#include"Icheck.h"

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


bool ingameSence()
{
    clrscr();

    int Id = randomObject();
    KhoiGach * curr; // tao khoi gach

    curr = TaoKhoiGach(Id); // random khoi gach

    int IDKhoiTiepTheo = randomObject();

    INFO info;  // khoi tao info ban dau
    initGame(&info); // truyen info ban dau

    char key; // nhap tu ban phim
    clock_t Start, End; // thoi gian chay
    // gna lai gia tri cho bang
    for(int i = 1;i <= 20; i++)
    {
        for(int j = 1;j <= 10; j++)
            Board[i][j] = 0;
    }
    render(); // ve khung game
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
                key = _getch();

                xoaKhoiGach(curr);

                if( key == 'a' || key == 'A' || key == 75) // van bi loi
                    moveLeftObject(curr);
                if( key == 'd' || key == 'D' || key == 77)
                    moveRightObject(curr);
                if( key == 's' || key == 'S' || key == 80)

                    moveDownObject(curr);
                if( key == 'w' || key == 'W' || key == 72)// no k dung khi over game, k hien ra ten ng choi
                    rotateObject(curr);


                VeKhoiGach(curr);
            }

            End = clock();

        }while(float(End - Start)/ CLK_TCK < info.speed); // choi duoc mot ti ai k chay duoc nua

        xoaKhoiGach(curr);

        if(moveDownObject(curr) == false)
        {
            ganGiaTri(curr); // gan toa do khoi gach vua roi xuong cho bagn

            int result = kiemTra(curr, &info);
            if(result == -1 || result == 2) // game over
                break;
            huyKhoiGach(curr); // giai phong bo nho

            curr = TaoKhoiGach(IDKhoiTiepTheo);
            IDKhoiTiepTheo = randomObject();// tao khoi gach xuat hien tiep theo
            // hoi cho vao trong thi khong bi nhay nua
            disPlayBoard(); // ve ma tran
        }

    }while(1);

    huyKhoiGach(curr);

//    gotoXY(30,25);
//
//    clrscr();



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

