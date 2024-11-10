/*Vaihe 1:
 * Luo C++ ohjelma, jossa määritellään luokka nimeltä Car. Luokalla seuraavat jäsenmuuttujan ja metodit:
 * Jäsenmuuttujat:
 * -brand: merkkijono, joka sisältää auton merkin
 * -model: merkkijono, joka sisältää auton mallin
 * -yearModel: kokonaisluku, joka sisältää auton valmistusvuoden
 * Metodit:
 * -printData(): tulostaa auton merkin, mallin ja valmistusvuoden
 * -setBrand(string): asettaa auton merkin
 * -setModel(string): asettaa auton mallin
 * -setYearModel(int): asettaa auton valmistusvuoden
 * Pääohjelmassa:
 * -Luo Car-olio pinomuistiin ja aseta sille merkki, malli ja vuosi
 * -Tulosta auton tiedot käyttämällä printData()-metodia
 *
 * Vaihe 2:
 * Luo C++ ohjelma, jossa määritellään luokka nimeltä Rectangle. Luokalla seuraavat jäsenmuuttujan ja metodit:
 * Jäsenmuuttujat:
 * -width: realliluku(double), joka määrittää suorakulmion leveyden
 * -height: reaaliluku(double), joka määrittää suorakulmion korkeuden
 * Metodit:
 * -getArea(): laskee ja palauttaa suorakulmion pinta-alan kaavalla width * height
 * -getCircum(): laskee ja palauttaa suorakilmion ympärysmitan kaavalla 2 * (width + height)
 * -setWidth(double): asettaa suorakulmion leveyden
 * -setHeight(double): asettaa suorakulmion korkeuden
 * Pääohjelmassa:
 * -Luo Rectangle-olio kekomuistiin ja aseta sen leveys ja korkeus
 * -Tulosta suorakulmion pinta-ala ja ympärysmitta
 * -Tuhoa olio
 *
 * Vaihe 3:
 * Luo C++ ohjelma, jossa määritellään luokka nimeltä Student. Luokalla seuraavat jäsenmuuttujan ja metodit:
 * Jäsenmuuttujat:
 * -name: merkkijono, joka sisältää opiskelijan nimen
 * studentNumber: kokonaisluku, joka sisältää opiskelijanumeron
 * .average: realliluku, joka sisältää opiskelijan keskiarvon
 * Metodit:
 * Setterit:
 * -setName(string): asettaa opiskelijan nimen
 * -setStudentNumber(int): asettaa opiskelijanumeron
 * -setAverage(double): asettaa opiskelijan keskiarvon
 * Getterit:
 * -string getName(): palauttaa opiskelijan nimen
 * -int getStudentNumver(int): palauttaa opiskelijanumeron(merkkimuotoinen tunniste)
 * -double getAverage(): palauttaa opiskelijan keskiarvon
 * Pääohjelmassa:
 * -Luo Student-olio smart-pointterilla ja aseta sille nimi, opisleijanumero ja keskiarvo
 * -Tulosta opiskelijan tiedot käyttämällä get-metodeja
 */

#include "car.h"
#include<iostream>
#include <memory>

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Ford");
    objCar.setModel("Focus");
    objCar.setYearModel(2012);
    objCar.printData();

    Rectangle *objRectangle = new Rectangle();
    objRectangle->setHeight(5.0);
    objRectangle->setWidth(6.0);
    objRectangle->numberInfo();

    delete objRectangle;
    objRectangle = nullptr;

    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Liisa Luoti");
    objStudent->setStudentNumber(129584);
    objStudent->setAverage(4.6);
    objStudent->studentInfo();
    return 0;
}
