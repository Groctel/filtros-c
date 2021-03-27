#ifndef _KeyFilter_h
#define _KeyFilter_h

#include "Filter.h"

class KeyFilter : public Filter {
private:
public:
	virtual ~KeyFilter () { };

	void process (Player & player);
};

#endif
