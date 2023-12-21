#ifndef GAME1_CHARACTER_H
#define GAME1_CHARACTER_H
#include <string>
using namespace std;

class Character {
public:
    string name;
    int health;

    Character(string characterName, int characterHealth);

    static void getInfo();
};


#endif //GAME1_CHARACTER_H
