#include "aggregationa.h"
#include "assosiationa.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int b=10;
    cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<<"b:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl;
    int *myPointer;
    myPointer=&a;
    cout<<"Pointterin osoittama osoite on: "<<&a<<endl;
    cout<<"Pointterin osoittaman muistipaikan sisalto on: "<<*myPointer<<endl;
    int *myPointer2;
    myPointer2=&b;
    cout<<"Pointterin osoittama osoite on: "<<&b<<endl;
    cout<<"Pointterin osoittaman muistipaikan sisalto on: "<<*myPointer2<<endl;
    int &refA=a;
    cout<<"refA osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan sisalto on: "<<refA<<endl;
    //tehtävänä oli vielä koittaa, saako refA:ta osoittamaan b:n osoitteeseen,
    //mutta referenssi määritellään jo luodessa, eikä sitä voida muuttaa myöhemmin
    //osoittamaan toiseen muuttujaan

    //Assosiation: harjoitus, jossa tarkoituksena todeta, ettei alkuperäisen B-olion
    //data muutu, vaikka A-olion dataa muokataan
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.sefBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki: "<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    //Aggregation: harjoitus, jossa tarkoituksena todeta, että myös alkuperäisen
    //B-olion data muuttuu, kun muokkaan A-olion dataa
    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
