#include <string>
#include "Item.hpp"

using namespace std;

Item::Item(string _name, string _desc, bool _stackable, int quant)
{
	name = _name;
	description = _desc;
	stackable = _stackable;
	quantity = quant;
}

string Item::getItemName()
{
	return name;
}

string Item::getDesc()
{
	return description;
}

bool Item::isStackable()
{
	return stackable;
}

int Item::getQuantity()
{
	return quantity;
}
