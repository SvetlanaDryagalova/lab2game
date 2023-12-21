#include "Weapon.h"
#include <iostream>
#include <string>

using namespace std;

string name;
int damage;

void Weapon(string weaponName, int weaponDamage) {
    name = weaponName;
    damage = weaponDamage;
}

void getInfo() {
    cout << "Weapon name: " << name << endl;
    cout << "Damage: " << damage << endl;
}