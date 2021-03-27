#ifndef _FilterChain_h
#define _FilterChain_h

#include <vector>
#include "KeyFilter.h"
#include "FatFilter.h"
#include "Home.h"

class FilterChain {
private:
	std::vector<Filter *> filters;
	Home target;

public:
	FilterChain (const std::vector<Filter *> & fil, const Home & tar);

	void apply (Player & player);
};

#endif
