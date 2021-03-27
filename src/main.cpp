#include <iostream>
#include "FilterManager.h"
#include "Home.h"
#include "Player.h"

int main () {
	Home home;

	Player p1 = Player(85, false);
	Player p2 = Player(20, false);
	Player p3 = Player(70, true);
	Player p4 = Player(23, true);

	FilterManager fm;

	std::cout << "Request player 1:" << std::endl;
	fm.process(p1, home);

	std::cout << "Request player 2:" << std::endl;
	fm.process(p2, home);

	std::cout << "Request player 3:" << std::endl;
	fm.process(p3, home);

	std::cout << "Request player 4:" << std::endl;
	fm.process(p4, home);
}
