#include "Home.h"

void Home :: letPlayerIn (Player & player) {
	if (player.CanEnter()) {
   	player.setHealth(100);
		printf("\033[0;32mJugador consigue entrar en casa\033[0m");
	}
	else {
		printf("\033[0;31mJugador no consigue entrar en casa\033[0m");
	}
}
