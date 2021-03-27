/**
 * @file Player.cpp
 * @brief T.D.A Player
 * @version 1.0
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Player.h"

using namespace std;

Player::Player(int pFatness, bool hasKey) {
    fatness = pFatness;
    master_key = hasKey;
    health = 50;
    can_enter = true;
}

void Player::request(FilterManager &manager, Home &home) {
    manager.receive(this, home);
}

void Player::enteredHome() {
    printf("\033[0;32mHe entrado a casa\033[0m");
}

void Player::rejectedHome() {
    printf("\033[0;31mPos me he quedao' fuera\033[0m");
}

int Player::getFatness() {
    return fatness;
}
int Player::getHealth() {
    return health;
}
bool Player::getMasterKey() {
    return master_key;
}
bool Player::getCanEnter() {
    return can_enter;
}

void Player::setFatness(int new_data) {
    fatness = new_data;
}
void Player::setHealth(int new_data) {
    health = new_data;
}
void Player::setMasterKey(bool new_data) {
    master_key = new_data;
}
void Player::setCanEnter(bool new_data) {
    can_enter = new_data;
}
