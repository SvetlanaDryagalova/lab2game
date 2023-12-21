#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

string name;
int health;

void Character(string characterName, int characterHealth){
    name = characterName;
    health = characterHealth;
}

void getInfo() {
    cout << "Character name: " << name << endl;
    cout << "Health: " << health << endl;
}