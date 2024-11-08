#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    //kun halutaan että molemmat toimivat, täytyy olla omat constructorit .h:ssa
    Student *objStudent1=new Student;
    objStudent1->setFname("Liisa");
    objStudent1->setLname("Joki");
    objStudent1->setEmail("liisa.joki@oamk.fi");
    objStudent1->setAge(17);

    //"helpompi" tapa tallentaa parametrit verrattuna aiempaan
    Student *objStudent2=new Student("Teppo", "Testi", "teppo.testi@oma.com", 24);

    //printataan
    objStudent1->studentInfo();
    objStudent2->studentInfo();

    //MUISTETAAN DELETOIDA!
    delete objStudent1;
    objStudent1=nullptr;
    delete objStudent2;
    objStudent2=nullptr;

    return 0;
}
