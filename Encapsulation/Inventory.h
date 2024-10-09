#pragma once
#include <map>
#include <iostream>
#include "Items.h"

class Inventory {
	public:
        // Add an item to the inventory
        void addItem(Items& item) { items_[item.getId()] = item; }

        // Remove an item from the inventory
        void removeItem(int id) { items_.erase(id); }

        // Get an item from the inventory
        Items getItem(int id) { return items_[id]; }

        // Print the contents of the inventory
        void printInventory() {
            for (auto& item : items_) {
                std::cout << "ID: " << item.second.getId() << ", Name: " << item.second.getName() << std::endl;
            }
        }
	private:
		std::map<int, Items> items_;
};