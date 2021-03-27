/**
 * @file FilterManager.cpp
 * @brief T.D.A FilterManager
 * @version 1.0
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "FilterManager.h"

using namespace std;

FilterManager::FilterManager() {
    KeyFilter key = KeyFilter();
    filters.push_back(key);

    FatFilter fat = FatFilter();
    filters.push_back(fat);
}

void FilterManager::receive(Player &player, Home &home) {
    vector<int> indexes(2) = {0, 1};
    FilterChain chain = createChain(indexes, home);
    forwardRequest(chain, player);
}

FilterChain FilterManager::createChain(vector<int> indexes, Home &home) {
    vector<Filter> filters_set;
    for (int i : indexes) {
        filters_set.push_back(filters[i]);
    }
    return FilterChain(filters_set, home);
}

void FilterManager::forwardRequest(FilterChain &chain, Player &player) {
    chain.apply(player);
}
