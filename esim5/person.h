#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;
//tarvitaan includata iostream ja using namespace std vaikka
//ne ovatkin mainissa.
//aloitetaan aina kirjoittamalla header-tiedostoon
//Headerissa vain määritellään mitä funktiot ottavat parametreina
//vastaan ja mitä palauttavat

class Person
{
private:
    int age;
    string name;
public:
    Person();       //Person luokan constructor
    ~Person();      //Person luokan destructor
    int getAge() const;
    void setAge(int newAge);
    string getName() const;
    void setName(const string &newName);
    void personInfo();
};

#endif // PERSON_H
