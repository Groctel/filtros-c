/**
 * @file Filter.h
 * @brief TDA Filter Utility
 * @version 1.0
 * @date 2021-03-27
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef _Filter_h
#define _Filter_h

#include "Home.h"
#include "Player.h"

/**
 *  @brief T.D.A. Filter. This class is an utilty to generate statistics. Receives a set of elements
 * by using @e load() class method and generates and output with useful statistics by using @e operator<<.
 *
 * Instance of @e v of abstract type @c Filter.
 *
 */
class Filter {
private:
public:
    // ---------------  Constructors ----------------
    /**
     * @brief Default constructor
     * @note
     *   This is the default constructor
     */
    Filter();

    virtual void process(Player &src) = 0;
};

#endif /* _Filter_h */
