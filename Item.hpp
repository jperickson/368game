#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <vector>

using namespace std;

/**
 * @brief An abstract base class for an item
 */
class Item {
private:
	string name;
	string description;
	bool stackable;
	int quantity;

public:
    /**
     * @brief A parameterised constructor for an item
     */
	Item(string _name, string _desc, bool _stackable, int quant);
	
	string getItemName();
	string getDesc();
	bool isStackable();
	int getQuantity();
};


#endif //ITEM_HPP
