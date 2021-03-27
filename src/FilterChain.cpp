#include "FilterChain.h"

FilterChain :: FilterChain (const std::vector<Filter *> & fil, const Home & tar)
	:filters (fil),
	 target  (tar)
{ }

void FilterChain :: apply (Player & player) {
	for (auto it = filters.begin(); it != filters.end(); ++it)
		(*it)->process(player);

	target.letPlayerIn(player);
}
