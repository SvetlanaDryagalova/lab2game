#ifndef GAME1_GAME_H
#define GAME1_GAME_H
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"
#include "Location.h"
#include <iostream>
#include <string>

class Game {
public:
    Player player;
    Location location;
public:
    Game(string playerName, string locationName);
    void start();
};


#endif //GAME1_GAME_H
