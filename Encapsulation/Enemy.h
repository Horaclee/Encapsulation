#pragma once
#include "Entity.h"

class Enemy : public Entity {

private:;
	   float health;
	   float attackDmg;
	   float defense;
	   float speed;


public:

	Enemy(float _health, float _attack, float _defense, float _speed)
		: health(_health), attackDmg(_attack), defense(_defense), speed(_speed) {}


	void setHealth(float hp) { health = hp; }
	float getHealth() { return health; }

	void setAttack(float att) { attackDmg = att; }
	float getAttack() { return attackDmg; }

	void setDefense(float def) { defense = def; }
	float getDefense() { return defense; }

	void setSpeed(float sp) { speed = sp; }
	float getSpeed() { return speed; }


	void receiveDamage(float damage) override {
		health -= damage * (1 - defense/100);
		if (health < 0) {
			health = 0;
		}
		std::cout << "Enemy health after damage: " << health << std::endl;
	}

	void attack(Entity& target, float damage) override {
		std::cout << "Enemy attacks target for: " << damage << " damage." << std::endl;
		target.receiveDamage(damage);
	}
};
