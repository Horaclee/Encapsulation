#include "Inventory.h"



std::vector<Items> Inventory::getPredefinedItems()
{
	std::vector<Items> getPredefinedItems;
	getPredefinedItems.push_back(Items("Rylai's Crystal Scepter", 350, 60, 0, 0));
	getPredefinedItems.push_back(Items("Malignance", 50, 100, 0, 0));
	getPredefinedItems.push_back(Items("Phantom Dancer", 0, 100, 0, 10));
	getPredefinedItems.push_back(Items("Warmog's Armor", 800, 0, 10, 0));
	getPredefinedItems.push_back(Items("Jak'Sho, The Protean", 300, 0, 90, 0));
	getPredefinedItems.push_back(Items("Locket of the Iron Solari", 250, 0, 60, 0));
	getPredefinedItems.push_back(Items("Frozen Heart", 400, 0, 40, 0));
	getPredefinedItems.push_back(Items("Zhonya's Hourglass", 0, 100, 30, 0));
	getPredefinedItems.push_back(Items("Mercurial Scimitar", 200, 40, 20, 0));
	getPredefinedItems.push_back(Items("Plated Steelcaps", 0, 0, 30, 45));
	getPredefinedItems.push_back(Items("Boots of Swiftness", 0, 0, 0, 60));
	getPredefinedItems.push_back(Items("The Golden Spatula", 33, 33, 33, 33));
	return getPredefinedItems;
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

void Inventory::addItemByName(const std::string& itemName)
{
	std::cout << "Trying to add item: " << itemName << std::endl;
	std::vector<Items> predefinedItems = getPredefinedItems();
	bool itemFound = false;

	for (auto& item : predefinedItems) {
		std::cout << "Checking item: " << item.getName() << std::endl;
		if (item.getName() == itemName) {
			items.push_back(item);
			std::cout << "Item " << item.getName() << " added to inventory." << std::endl;
			itemFound = true;
			break;
		}
	}

	if (!itemFound) {
		std::cout << "Item " << itemName << " not found in predefined items." << std::endl;
	}
}


