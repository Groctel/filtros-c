/**
 * @file Home.cpp
 * @brief T.D.A Home
 * @version 1.0
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Home.h"

using namespace std;

Home::Home() {
}

void Home::execute(Player &player) {
    if (player.getCanEnter()) {
        player.setHealth(100);
        player.enteredHome();
    } else {
        player.rejectedHome();
    }
}
