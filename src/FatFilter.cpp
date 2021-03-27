#include "FatFilter.h"

void FatFilter :: process (Player & player) {
	if (player.Fatness() > 50)
		player.setCanEnter(false);
}
