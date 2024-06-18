#pragma once
#include "FlowersBouquet.h"
#include "Person.h"
#include "Gardener.h"

class FlowersBouquet;

class Grower : public Person
{
private:
	Gardener* gardener;
public:
	Grower(std::string, Gardener* gardener);
	FlowersBouquet* prepareOrder(std::vector<std::string>);
};