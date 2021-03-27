#ifndef _FatFilter_h
#define _FatFilter_h

#include "Filter.h"

class FatFilter : public Filter {
private:
public:
	virtual ~FatFilter () { };

	void process (Player & player);
};

#endif
