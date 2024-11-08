#include "person.h"

//cpp-tiedostossa esitellään kaikki header-tiedostossa
//määriteltyjen metodien toteutukset

int Person::getAge() const
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &newName)
{
    name = newName;
}

void Person::personInfo()
{
    cout<<"------------------------------"<<endl;
    cout<<"Henkilon nimi on: "<<name<<endl;
    cout<<"Henkilon ika on: "<<age<<endl;
    cout<<"------------------------------"<<endl;
}

Person::Person()
{
    cout<<"Person olio luotiin juuri"<<endl;    //laitetaan tulostus, jotta nähdään missä luodaan
}

Person::~Person()
{
    cout<<"Person olio tuhottiin juuri"<<endl;   //laitetaan tulostus, jotta nähdään missä tuhotaan
}

