#include "classroom.h"

Classroom::Classroom()
{
    //automaattiset oliot
    objStudent1=Student("Teppo Testi");
    objStudent2=Student("Liisa Virta");
    objStudent3=Student("Aino Joki");
    //dynaaminen olio
    objStudent4=new Student("Timo Virta");

}

Classroom::~Classroom()
{
    //yleensä dynaamiset oliot tuhotaan destruktorissa
    delete objStudent4;
    objStudent4=nullptr;
}

void Classroom::printData()
{
    //printataan automattiset oliot
    objStudent1.getData();
    objStudent2.getData();
    objStudent3.getData();
    //printataan dynaaminen olio
    objStudent4->getData();
}
