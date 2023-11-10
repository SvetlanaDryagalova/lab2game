//Дрягалова Светлана
//Б18
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Класс игрока
class Player {
public:
    string name;
    int health;

    Player(string playerName) {
        name = playerName;
        health = 100;
    }

    void getInfo() {
        cout << "Player name: " << name << endl;
        cout << "Health: " << health << endl;
    }
};

// Класс врага
class Enemy {
public:
    string name;
    int power;

    Enemy(string enemyName, int enemyPower) {
        name = enemyName;
        power = enemyPower;
    }

    void getInfo() {
        cout << "Enemy name: " << name << endl;
        cout << "Power: " << power << endl;
    }
};

// Класс оружия
class Weapon {
public:
    string name;
    int damage;

    Weapon(string weaponName, int weaponDamage) {
        name = weaponName;
        damage = weaponDamage;
    }

    void getInfo() {
        cout << "Weapon name: " << name << endl;
        cout << "Damage: " << damage << endl;
    }
};

// Класс игровой локации
class Location {
public:
    string name;
    vector<Enemy> enemies;
    vector<Weapon> weapons;

    Location(string locationName) {
        name = locationName;
    }

    void addEnemy(Enemy enemy) {
        enemies.push_back(enemy);
    }

    void addWeapon(Weapon weapon) {
        weapons.push_back(weapon);
    }
};

// Класс игры
class Game {
public:
    Player player;
    Location location;

    Game(string playerName, string locationName) : player(playerName), location(locationName) {}

    void start() {
        cout << "The game has started!" << endl;
        player.getInfo();
        location.addEnemy(Enemy("Enemy1", 10));
        location.addEnemy(Enemy("Enemy2", 20));
        location.addWeapon(Weapon("Sword", 15));

        cout << "You are in " << location.name << endl;

        for (Enemy enemy : location.enemies) {
            enemy.getInfo();
        }

        for (Weapon weapon : location.weapons) {
            weapon.getInfo();
        }
    }
};

int main() {
    Game game("Player1", "Location1");
    game.start();
    return 0;
}
