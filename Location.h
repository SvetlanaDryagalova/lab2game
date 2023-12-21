#ifndef GAME1_LOCATION_H
#define GAME1_LOCATION_H
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"
#include <string>
#include <vector>

using namespace std;
// Класс игровой локации
class Location {
public:
    string name;
    vector<Enemy> enemies;
    vector<Weapon> weapons;

    Location();
    void addEnemy(const Enemy& enemy);
    void addWeapon(const Weapon& weapon);
};


#endif //GAME1_LOCATION_H
