/**
 * @file FatFilter.cpp
 * @brief T.D.A FatFilter
 * @version 1.0
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "FatFilter.h"

using namespace std;

FatFilter::FatFilter() {
}

void FatFilter::process(Player &src) {
    if (src.getFatness() > 50)
        src.setCanEnter(false);
}
