#include "italianchef.h"

ItalianChef::ItalianChef(string n):Chef(n)
{
    this->setName(n);
    cout<<"ItalianChef "<<this->getName()<<" konstuktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<this->getName()<<" destuktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"ItalianChef "<<this->getName()<<" makes pasta."<<endl;
}


