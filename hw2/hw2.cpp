#include <iostream>
#include "Person.h"
#include "FlowersBouquet.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Gardener.h"
#include "Grower.h"
#include "Florist.h"

int main()
{
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    DeliveryPerson* dylan = new DeliveryPerson("Dylan");
    Gardener* garett = new Gardener("Garett");
    Grower* gray = new Grower("Gray", garett);
    Wholesaler* watson = new Wholesaler("Watson", gray);
    FlowerArranger* flora = new FlowerArranger("Flora");
    Florist* fred = new Florist("Fred", watson, flora, dylan);

    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };
    chris->orderFlowers(fred, robin, order);
    delete chris;
    delete robin;
    delete dylan;
    delete garett;
    delete gray;
    delete watson;
    delete flora;
    delete fred;
}