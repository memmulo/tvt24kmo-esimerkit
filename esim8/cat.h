#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal
{
private:
    string owner;
public:
    Cat();
    string getOwner() const;
    void setOwner(const string &newOwner);
};

#endif // CAT_H
