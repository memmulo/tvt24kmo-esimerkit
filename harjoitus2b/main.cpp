/*Tässä harjoituksessa tutustutaan C++ ohjelmoinnin käsitteeseen vektori ja kuinka sitä käyttäen luodaan ns. oliolista
 * Harjoitus 2b(oliolista)
 * luo C++ ohjelma, jossa määritellään luokka nimeltä Car. Tällä luokalla tulisi olla seuraavat jäsen muuttujat ja metodit:
 * Jäsenmuuttujat:
 * -brand: merkkijono, joka sisältää auton merkin
 * -model: merkkijono, joka sisältää auton mallin
 * -yearModel: kokonaisluku, joka sisältää auton valmistusvuoden
 * Metodit:
 * -printData(): tulostaa auton merkin, mallin ja valmistusvuoden
 * -Car(string, string, int): konstruktori, jolla voidaan alustaa kaikki jäsenmuuttujat
 * Pääohjelmassa:
 * -Luo vektori nimeltään carList (luo lista pinoon, et siis tarvitse smart pointteria)
 * -Luo kolme Car-luokan oliota (keksi itse merkit, mallit ja vuosimallit)
 * -Lisää oliot listaan
 * -Tulosta listan toisen alkion tiedot
 * -Tulosta kaikkien autojen tiedot käyttämällä for-silmukkaa

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
#include "student.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Student> studentList;

    //luodaan Student-luokan oloita
    Student objectStudent0("Teppo Testi",1999,"TVT23SPL");
    Student objectStudent1("Liisa Joki",1998,"TVT23SPL");
    Student objectStudent2("Aino Virta",1997,"TVT23SPO");
    Student objectStudent3("Matti Virtanen",2001,"TVT23SPO");
    Student objectStudent4("Mikko Vilkas",2001,"TVT23SPL");

    //lisätään luodut oliot listaan
    studentList.push_back(objectStudent0);
    studentList.push_back(objectStudent1);
    studentList.push_back(objectStudent2);
    studentList.push_back(objectStudent3);
    studentList.push_back(objectStudent4);

    for(int x=0; x<=4; x++){
        studentList[x].printStudentData();
    }
    return 0;
}
