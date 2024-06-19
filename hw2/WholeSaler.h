#pragma once
#include "Person.h"
#include <string>
#include <vector>

class FlowersBouquet;

class Wholesaler : public Person
{
private:
	Grower* grower;
public:
	Wholesaler(std::string, Grower* grower);
	FlowersBouquet* acceptOrder(std::vector < std::string >);
	std::string getName();
};