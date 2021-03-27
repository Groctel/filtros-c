#ifndef _FilterManager_h
#define _FilterManager_h

#include <vector>

#include "FilterChain.h"

class FilterManager {
private:
	std::vector<Filter *> filters;

public:
	 FilterManager ();
	~FilterManager ();

	void process (Player & player, Home & home);

	void apply (FilterChain & chain, Player & player);
};

#endif
