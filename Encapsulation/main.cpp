#include "Player.h"
#include "Enemy.h"
#include "Entity.h"
#include "Items.h"

int main() {

	Inventory playerinventory;

	Player player(50.0f, 5.0f, 5.0f, 5.0f, playerinventory);
	player.getInventory().addItemByName("Malignance");
	player.getInventory().printInventory();
	player.updateStats();
	


	Enemy E(50.0f, 5.0f, 5.0f, 5.0f);

	E.attack(player, E.getAttack());
	player.attack(E, player.getAttack());
}