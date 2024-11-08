#include "person.h"
#include <iostream>
#include <memory>


using namespace std;

int main()
{
    //luodaan ns. automaattinen olio luokkaa Person, nimeltä objPerson
    //tällainen olio luodaan pinoon ja se tuhoutuu automaattisesti
    Person objPerson;
    objPerson.setName("Teppo Testi");
    objPerson.setAge(24);
    cout <<"Henkilon 1 nimi on: "<< objPerson.getName() << endl;
    cout <<"Henkilon ika on: "<< objPerson.getAge() << endl;
    objPerson.personInfo();

    //luodaan ns. dynaaminen olio luokkaa Person, nimeltä objPerson2
    //tällainen olio luodaan kekoon ja se täytyy tuhota itse
    Person *objPerson2;         //olion nimen eteen tähti. Esitellään osoitinmuuttuja,
                                //johon voidaan tallentaa Person tyyppinen data
    objPerson2=new Person();
    objPerson2->setName("Aino Joki");
    objPerson2->setAge(25);
    objPerson2->personInfo();
    delete objPerson2;          //muista AINA tuhota dynaaminen olio itse!
    objPerson2=nullptr;         //laitetaan nullpointteriin

    //Luodaan olio smart-pointterin avulla
    //tällainen olio luodaan kekoon ja se tuhoutuu automaattisesti
    unique_ptr<Person> objPerson3 = make_unique<Person>();
    objPerson3->setName("Liisa Virta");
    objPerson3->setAge(22);
    objPerson3->personInfo();
    return 0;
}
