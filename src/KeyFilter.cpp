#include "KeyFilter.h"

void KeyFilter :: process (Player & player) {
	if (!player.MasterKey())
		player.setCanEnter(false);
}
