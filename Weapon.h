#ifndef GAME1_WEAPON_H
#define GAME1_WEAPON_H

#include <iostream>
#include <string>

using namespace std;

//класс оружия
class Weapon {
private:
    string name;
    int damage;
public:
    Weapon(string weaponName, int weaponDamage);
    void getInfo();
};


#endif //GAME1_WEAPON_H
