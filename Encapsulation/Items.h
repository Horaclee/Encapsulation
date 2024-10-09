#pragma once
#include <iostream>

class Items {

private:
	int id;
	std::string name;
	float health;
	float attack;
	float defense;
	float speed;

public:

	Items(int _id, std::string _name, float _health, float _attack, float _defense, float _speed)
		: id(_id), name(_name), health(_health), attack(_attack), defense(_defense), speed(_speed) {}

	void setId(float _id) { id = _id; }
	int getId() { return id; }

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