#include "Enemy.h"
#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

int power;

void Enemy(string enemyName, int enemyPower) : Character(enemyName, 100) {
    power = enemyPower;
}

void getInfo() {
    Character::getInfo();
    cout << "Power: " << power << endl;
}
