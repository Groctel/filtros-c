#ifndef _Player_h
#define _Player_h

#include <stdio.h>

class Player {
private:
	int  fatness;
	int  health    = 50;
	bool can_enter = true;
	bool master_key;

public:
	Player (int peso, bool llave);

	int  Fatness   ();
	int  Health    ();
	bool MasterKey ();
	bool CanEnter  ();

	void setHealth    (int new_data);
	void setFatness   (int new_data);
	void setMasterKey (bool new_data);
	void setCanEnter  (bool new_data);
};

#endif
