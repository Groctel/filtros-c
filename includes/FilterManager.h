/**
 * @file FilterManager.h
 * @brief TDA FilterManager Utility
 * @version 1.0
 * @date 2021-03-27
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef _FilterManager_h
#define _FilterManager_h

#include <vector>

#include "FatFilter.h"
#include "Filter.h"
#include "FilterChain.h"
#include "Home.h"
#include "KeyFilter.h"
#include "Player.h"

using namespace std;

/**
 *  @brief T.D.A. FilterManager. This class is an utilty to generate statistics. Receives a set of elements
 * by using @e load() class method and generates and output with useful statistics by using @e operator<<.
 *
 * Instance of @e v of abstract type @c FilterManager.
 *
 */
class FilterManager {
private:
    vector<Filter> filters;
    // ---------------  Constructors ----------------
    /**
     * @brief Default constructor
     * @note
     *   This is the default constructor
     */
public:
    FilterManager();

    FilterChain createChain(vector<int> index);
    void receive(Player &player, Home &home);

    void forwardRequest(FilterChain &chain, Player &player);
};

#endif /* _FilterManager_h */
