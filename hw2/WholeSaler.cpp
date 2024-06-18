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
	cout << "Wholesaler " << getName() << " forwards the request to Grower " << grower->getName() << "." << endl;
	FlowersBouquet* bouquet = grower->prepareOrder(order);
	cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << getName() << "." << endl;
	return bouquet;
}