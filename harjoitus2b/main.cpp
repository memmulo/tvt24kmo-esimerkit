#include "car.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;
    //luodaan Car-luokan olioita
    Car objCar_1= Car("Ford","Focus", 2012);
    Car objCar_2= Car("Toyota","Yaris", 2022);
    Car objCar_3= Car("Opel","Meriva", 2019);

    //lisätään oliot listaan
    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    //tulostetaan listan toisen alkion tiedot
    carList[1].printData();

    //tulostetaan kaikki alkion tiedot for-loopilla
    cout<<"Kaikkien autojen tiedot"<<endl;
    for(const Car& car: carList){
        cout<<"Auton merkki= "<<car.getBrand()<<", malli= "<<car.getModel()<<" ja vuosi= "<<car.getYearModel()<<endl;
    }

    return 0;
}
