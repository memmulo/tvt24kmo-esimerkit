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
    cout<<"Auton merkki:"<<brand<<", malli: " <<model<<" ,valmistusvuosi: "<<yearModel<<endl;
}

Car::Car() {}


Rectangle::Rectangle()
{

}

double Rectangle::getHeight()
{
    return height;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getArea()
{
    return width * height;
}

double Rectangle::getCircum()
{
    return 2 *(width + height);
}

void Rectangle::numberInfo()
{
    cout<<"Suorakulmion pinta-ala on "<<getArea()<<" ja ymparysmitta on "<<getCircum()<< endl;
}

Student::Student()
{

}


int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

void Student::studentInfo()
{
    cout<<"Opiskelijan tiedot:"<<endl;
    cout<<"Nimi: "<<name<<endl;
    cout<<"Opiskelijanumero: "<<studentNumber<<endl;
    cout<<"Keskiarvo: "<<average<<endl;
}

