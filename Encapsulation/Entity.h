#pragma once
#include <iostream>

class Entity
{
public:
	virtual void receiveDamage(float damage) = 0; 
	virtual void attack(Entity& target, float damage) = 0; 

private:

};
