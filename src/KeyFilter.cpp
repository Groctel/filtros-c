/**
 * @file KeyFilter.cpp
 * @brief T.D.A KeyFilter
 * @version 1.0
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "KeyFilter.h"

using namespace std;

KeyFilter::KeyFilter() {
}

void KeyFilter::process(Player &src) {
    if (!src.getMasterKey())
        src.setCanEnter(false);
}