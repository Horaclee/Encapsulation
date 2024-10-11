#include "Player.h"

void Player::updateStats()
{
    float totalHealth = 0;
    float totalAttack = 0;
    float totalDefense = 0;
    float totalSpeed = 0;

    for (auto item : inventory.getItems()) {
        totalHealth += item.getHealth();
        totalAttack += item.getAttack();
        totalDefense += item.getDefense();
        totalSpeed += item.getSpeed();
    }

    health += totalHealth;
    attackDmg += totalAttack;
    defense += totalDefense;
    speed += totalSpeed;

    std::cout << "Updated Player Stats: " << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack Power: " << attackDmg << std::endl;
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Speed: " << speed << std::endl;
}
