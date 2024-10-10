#pragma once
#include <map>
#include <iostream>
#include "Items.h"

class Inventory {
	public:
        void addItem(Items& item);

        void removeItem(const std::string& itemName);

        Items getItem(int id) { return items[id]; }

        void printInventory() {
            for (auto& item : items) {
                std::cout << "Name: " << item.getName() << std::endl;
            }
        }

        void findItemByName(const std::string& name, Items& founditem);

	private:
		std::vector<Items> items;
        std::vector<Items> getPredefinedItems();
};