#include "Wholesaler.h"
#include "Grower.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Wholesaler::Wholesaler(string name, Grower* grower) : Person(name)
{
	this->name = name;
	this->grower = grower;
}

FlowersBouquet* Wholesaler::acceptOrder(vector<string> order)
{
	cout << getName() << " forwards the request to " << grower->getName() << "." << endl;
	FlowersBouquet* bouquet = grower->prepareOrder(order);
	cout << grower->getName() << " returns flowers to " << getName() << "." << endl;
	return bouquet;
}
std::string Wholesaler::getName()
{
    return "Wholesaler " + Person::getName();
}