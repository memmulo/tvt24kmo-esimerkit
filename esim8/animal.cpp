#include "animal.h"

int Animal::getWeight() const
{
    return weight;
}

void Animal::setWeight(int newWeight)
{
    weight = newWeight;
}

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

Animal::Animal()
{

}
