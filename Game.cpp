#include "Game.h"
#include <iostream>
#include <string>

Player player;
Location location;

void Game(Player playerName, Location locationName) {
    player = Player(playerName);
    location = Location(locationName);
}
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