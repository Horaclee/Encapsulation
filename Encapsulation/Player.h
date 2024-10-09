#pragma once
#include "Inventory.h"

class Player {

	private:;
		float health;
		float attack;
		float defense;
		float speed;

		Inventory inventory;

	public:

		Player(float _health, float _attack, float _defense, float _speed, Inventory inv)
			: health(_health), attack(_attack), defense(_defense), speed(_speed), inventory(inv) {}


		void setHealth(float hp) { health = hp; }
		float getHealth() { return health; }

		void setAttack(float att) { attack = att; }
		float getAttack() { return attack; }

		void setDefense(float def) { defense = def; }
		float getDefense() { return defense; }

		void setSpeed(float sp) { speed = sp; }
		float getSpeed() { return speed; }
};