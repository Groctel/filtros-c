/**
 * @file KeyFilter.h
 * @brief TDA KeyFilter Utility
 * @version 1.0
 * @date 2021-03-27
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef _KeyFilter_h
#define _KeyFilter_h

#include "Filter.h"
#include "Player.h"

/**H
 *  @brief T.D.A. KeyFilter. This class is an utilty to generate statistics. Receives a set of elements
 * by using @e load() class method and generates and output with useful statistics by using @e operator<<.
 *
 * Instance of @e v of abstract type @c KeyFilter.
 *
 */
class KeyFilter : public Filter {
private:
public:
    // ---------------  Constructors ----------------
    /**
     * @brief Default constructor
     * @note
     *   This is the default constructor
     */
    KeyFilter();

    void process(Player &src);
};

#endif /* _KeyFilter_h */
