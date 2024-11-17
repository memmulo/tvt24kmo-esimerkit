#include "car.h"


string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout<<"Auton merkki= "<<brand<<", malli= "<<model<<" ja vuosi= "<<yearModel<<endl;
}

Car::Car() {}

Car::Car(string b, string m, int y)
{
    brand=b;
    model=m;
    yearModel=y;
}
