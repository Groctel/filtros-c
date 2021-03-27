#include "Player.h"

Player :: Player (int pFatness, bool hasKey)
	: fatness    (pFatness),
	  master_key (hasKey)
{ }

int Player :: Fatness () {
	return fatness;
}

int Player :: Health () {
	return health;
}

bool Player :: MasterKey () {
	return master_key;
}

bool Player :: CanEnter () {
	return can_enter;
}

void Player :: setFatness(int new_data) {
	fatness = new_data;
}

void Player :: setHealth(int new_data) {
	health = new_data;
}

void Player :: setMasterKey(bool new_data) {
	master_key = new_data;
}

void Player :: setCanEnter(bool new_data) {
	can_enter = new_data;
}
