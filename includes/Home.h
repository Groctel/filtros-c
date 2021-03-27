/**
 * @file Home.h
 * @brief TDA Home Utility
 * @version 1.0
 * @date 2021-03-27
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef _Home_h
#define _Home_h

#include "Player.h"

/**
 *  @brief T.D.A. Home. This class is an utilty to generate statistics. Receives a set of elements
 * by using @e load() class method and generates and output with useful statistics by using @e operator<<.
 *
 * Instance of @e v of abstract type @c Home.
 *
 */
class Home {
private:
public:
    // ---------------  Constructors ----------------
    /**
     * @brief Default constructor
     * @note
     *   This is the default constructor
     */
    Home();

    void execute(Player &player);
};

#endif /* _Home_h */
