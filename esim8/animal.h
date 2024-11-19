#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
private:
    int weight;
    string color;
public:
    Animal();
    int getWeight() const;
    void setWeight(int newWeight);
    string getColor() const;
    void setColor(const string &newColor);
protected:
    void Test();
};

#endif // ANIMAL_H
