#include "Gardener.h"

Gardener::Gardener(std::string name) : Person(name)
{
	this->name = name;
}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> order)
{
	std::cout << "Gardener " << getName() << " prepares flowers." << std::endl;
	FlowersBouquet* bouquet = new FlowersBouquet(order);
	return bouquet;
}