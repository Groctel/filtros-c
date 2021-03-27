/**
 * @file FatFilter.h
 * @brief TDA FatFilter Utility
 * @version 1.0
 * @date 2021-03-27
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef _FatFilter_h
#define _FatFilter_h

#include "Filter.h"
#include "Player.h"

/**
 *  @brief T.D.A. FatFilter. This class is an utilty to generate statistics. Receives a set of elements
 * by using @e load() class method and generates and output with useful statistics by using @e operator<<.
 *
 * Instance of @e v of abstract type @c FatFilter.
 *
 */
class FatFilter : public Filter {
private:
public:
    // ---------------  Constructors ----------------
    /**
     * @brief Default constructor
     * @note
     *   This is the default constructor
     */
    FatFilter();

    void process(Player &src);
};

#endif /* _FatFilter_h */
