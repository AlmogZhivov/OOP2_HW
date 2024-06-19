#include "Florist.h"


Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person(name)
{
	this->wholesaler = wholesaler;
	this->flowerArranger = flowerArranger;
	this->deliveryPerson = deliveryPerson;
}

void Florist::acceptOrder(Person* person, std::vector<std::string> order)
{
	std::cout << getName() << " forwards request to " << wholesaler->getName() << "." << std::endl;
	FlowersBouquet* bouquet = wholesaler->acceptOrder(order);
	std::cout << wholesaler->getName() << " returns flowers to " << getName() << "." << std::endl;
	std::cout << getName() << " request flowers arrangement from " << flowerArranger->getName() << "." << std::endl;
	flowerArranger->arrangeFlowers(bouquet);
	std::cout << flowerArranger->getName() << " returns arranged flowers to " << getName() << "." << std::endl;
	std::cout << getName() << " forwards flowers to " << deliveryPerson->getName() << "." << std::endl;
	deliveryPerson->deliver(person, bouquet);
}
std::string Florist::getName()
{
	return "Florist " + Person::getName();
}