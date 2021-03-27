/**
 * @file FilterChain.cpp
 * @brief T.D.A FilterChain
 * @version 1.0
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "FilterChain.h"

using namespace std;

FilterChain::FilterChain(vector<Filter> &filters, Home &target) {
    this.filters = filters;
    this.target = target;
}

void FilterChain::apply(Player &src) {
    for (Filter f : filters) {
        f.process(src);
    }
    target.execute(src);
}