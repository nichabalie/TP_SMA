#include <iostream>
#include "building.h"
#include "unit.h"
#include "map.h"
#include "game.h"
#include <ctime>
#include <windows.h> //For Sleep()

using namespace std;

int main()
{
    int i=0;
    srand(time(NULL));


    Game game;
    game.play();
    while(game.play())
    {
        game.diplayMap();
        Sleep(10);
        cout << i << endl;
        i++;
    }

    return 0;
}
