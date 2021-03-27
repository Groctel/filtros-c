#include "FilterManager.h"
#include "Home.h"
#include "Player.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    Home home;

    Player p1 = Player(85, false);
    Player p2 = Player(20, false);
    Player p3 = Player(70, true);
    Player p4 = Player(23, true);

    FilterManager fm;

    cout endl
        << endl
        << "Request player 1:" << endl;
    p1.request(fm, home);
    cout endl
        << endl
        << "Request player 2:" << endl;
    p2.request(fm, home);
    cout endl
        << endl
        << "Request player 3:" << endl;
    p3.request(fm, home);
    cout endl
        << endl
        << "Request player 4:" << endl;
    p4.request(fm, home);
}
