#include "Player.h"
#include "Items.h"

int main() {

	Player player(50.0f, 5.0f, 5.0f, 5.0f, Inventory());

	Items defaultitem("default", 0.0f, 0.0f, 0.0f, 0.0f);

	player.getInventory().findItemByName("Malignance", defaultitem);

	if (defaultitem.getName() != "default") {
		std::cout << "item found: " << defaultitem.getName();
		player.getInventory().addItem(defaultitem);
	}
	player.getInventory().printInventory();

}