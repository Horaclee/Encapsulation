#pragma once
#include <map>
#include <iostream>
#include "Items.h"

class Inventory {
	public:
        Inventory() {
            std::cout << "Inventory created." << std::endl;
        }

        void removeItem(const std::string& itemName);

        void addItemByName(const std::string& itemName);

        const std::vector<Items>& getItems() const { return items; }


        void printInventory() {
            for (auto& item : items) {
                std::cout << "Name: " << item.getName() << std::endl;
            }
        }

        

        std::vector<Items> getPredefinedItems();

	private:
		std::vector<Items> items;
};