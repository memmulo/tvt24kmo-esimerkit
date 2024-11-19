#include "cat.h"

string Cat::getOwner() const
{
    return owner;
}

void Cat::setOwner(const string &newOwner)
{
    owner = newOwner;
}

Cat::Cat()
{

}
