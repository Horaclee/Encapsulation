#pragma once
#include <iostream>
#include "vector"

class Items {

private:
	
	std::string name;
	float health;
	float attack;
	float defense;
	float speed;

public:

	Items(std::string _name, float _health, float _attack, float _defense, float _speed)
		: name(_name), health(_health), attack(_attack), defense(_defense), speed(_speed) {}


	void setName(std::string _name) { name = _name; }
	std::string getName() { return name; }

	void setHealth(float hp) { health = hp; }
	float getHealth() { return health; }

	void setAttack(float att) { attack = att; }
	float getAttack() { return attack; }

	void setDefense(float def) { defense = def; }
	float getDefense() { return defense; }

	void setSpeed(float sp) { speed = sp; }
	float getSpeed() { return speed; }


};