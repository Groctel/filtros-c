/**
 * @file Player.h
 * @brief TDA Player Utility
 * @version 1.0
 * @date 2021-03-27
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef _Player_h
#define _Player_h

#include "FilterManager.h"
#include "Home.h"
#include <stdio.h>

/**
 *  @brief T.D.A. Player. This class is an utilty to generate statistics. Receives a set of elements
 * by using @e load() class method and generates and output with useful statistics by using @e operator<<.
 *
 * Instance of @e v of abstract type @c Player.
 *
 */
class Player {
private:
    int fatness;
    int health;
    bool master_key;
    bool can_enter;

public:
    // ---------------  Constructors ----------------
    /**
     * @brief Default constructor
     * @note
     *   This is the default constructor
     */
    Player(int peso, bool llave);

    void request(FilterManager &Gestor);

    void enteredHome();

    void rejectedHome();

    // Getters
    int getFatness();
    int getHealth();
    bool getMasterKey();
    bool getCanEnter();
    // Setters
    void setHealth(int new_data);
    void setFatness(int new_data);
    void setMasterKey(bool new_data);
    void setCanEnter(bool new_data);
};

#endif /* _Player_h */
