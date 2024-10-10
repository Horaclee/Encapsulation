#include "Inventory.h"


std::vector<Items> Inventory::getPredefinedItems()
{
	items.push_back(Items("Rylai's Crystal Scepter", 350, 60, 0, 0));
	items.push_back(Items("Malignance", 50, 100, 0, 0));
	items.push_back(Items("Phantom Dancer", 0, 100, 0, 10));
	items.push_back(Items("Warmog's Armor", 800, 0, 10, 0));
	items.push_back(Items("Jak'Sho, The Protean", 300, 0, 90, 0));
	items.push_back(Items("Locket of the Iron Solari", 250, 0, 60, 0));
	items.push_back(Items("Frozen Heart", 400, 0, 40, 0));
	items.push_back(Items("Zhonya's Hourglass", 0, 100, 30, 0));
	items.push_back(Items("Mercurial Scimitar", 200, 40, 20, 0));
	items.push_back(Items("Plated Steelcaps", 0, 0, 30, 45));
	items.push_back(Items("Boots of Swiftness", 0, 0, 0, 60));
	items.push_back(Items("The Golden Spatula", 33, 33, 33, 33));
	return items;
}



void Inventory::addItem(Items& item)
{
	items.push_back(item);

}

void Inventory::removeItem(const std::string& itemName)
{
	for (auto it = items.begin(); it != items.end(); ++it) {
		if (it->getName() == itemName) {
			items.erase(it);
			std::cout << "Item" << it->getName() << " removed from inventory";
			return;
		}
	}
	std::cout << "Item" << itemName << " not found in inventory";
}

void Inventory::findItemByName(const std::string& name, Items& founditem)
{
	bool itemFound = false;
	for (auto& item : getPredefinedItems()) {
		if (item.getName() == name) {
			founditem = item;
			itemFound = true;
			break;
		}
	}

	if (!itemFound) {
		std::cout << "Item not found: " << name << std::endl; 
	}
}