#include "Location.h"
#include <string>
#include <vector>

using namespace std;

string name;
vector<Enemy> enemies;
vector<Weapon> weapons;

void Location(string locationName) {
    name = locationName;
}

void addEnemy(const Enemy& enemy) {
    enemies.push_back(enemy);
}

void addWeapon(const Weapon& weapon) {
    weapons.push_back(weapon);
}