#include "Grower.h"

Grower::Grower(std::string name, Gardener* gardener) : Person(name)
{
	this->name = name;
	this->gardener = gardener;
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> order)
{
	std::cout << "Grower " << getName() << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
	FlowersBouquet* bouquet = gardener->prepareBouquet(order);
	std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << getName() << "." << std::endl;
	return bouquet;
}