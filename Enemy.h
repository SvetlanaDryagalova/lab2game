#ifndef GAME1_ENEMY_H
#define GAME1_ENEMY_H
#include "Character.h"
#include <string>

// Класс врага
class Enemy : public Character{
public:
    int power;

    Enemy(string enemyName, int enemyPower);
    void getInfo();
};


#endif //GAME1_ENEMY_H
