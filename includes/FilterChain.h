/**
 * @file FilterChain.h
 * @brief TDA FilterChain Utility
 * @version 1.0
 * @date 2021-03-27
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef _FilterChain_h
#define _FilterChain_h

#include "Filter.h"
#include "KeyFilter.h"
#include "FatFilter.h"
#include "Home.h"

/**
 *  @brief T.D.A. FilterChain. This class is an utilty to generate statistics. Receives a set of elements
 * by using @e load() class method and generates and output with useful statistics by using @e operator<<.
 *
 * Instance of @e v of abstract type @c FilterChain.
 *
 */
class FilterChain {
private:
    vector<Filter> filters;
    Home target;
public:
    // ---------------  Constructors ----------------
    /**
     * @brief Default constructor
     * @note
     *   This is the default constructor
     */
    FilterChain(vector<Filter> &filters, Home &target);

    void apply(Player &src);
};

#endif /* _FilterChain_h */
