#include "FilterManager.h"

FilterManager :: FilterManager () {
	filters.resize(2);

	filters[0] = new KeyFilter();
	filters[1] = new FatFilter();
}

FilterManager :: ~FilterManager () {
	for (auto it = filters.begin(); it != filters.end(); ++it)
		delete (*it);
}

void FilterManager :: process (Player & player, Home & home) {
	FilterChain chain(filters, home);
	apply(chain, player);
}

void FilterManager :: apply (FilterChain & chain, Player & player) {
	chain.apply(player);
}
