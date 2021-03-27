#ifndef _Filter_h
#define _Filter_h

#include "Player.h"

class Filter {
private:
public:
	virtual ~Filter () { };

	virtual void process (Player &src) = 0;
};

#endif
