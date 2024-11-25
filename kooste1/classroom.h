#ifndef CLASSROOM_H
#define CLASSROOM_H
#include "student.h"

#include <iostream>
using namespace std;

class Classroom
{
private:
    //luodaan oliot pinoon (automaattiset oliot)
    Student objStudent1;
    Student objStudent2;
    Student objStudent3;
    //luodaan olio kekoon (dynaamiseen muistiin)
    //huom! normisti ei kahtaa eri tyyppiä samaan aikaan
    Student *objStudent4;
public:
    Classroom();
    ~Classroom();
    void printData();
};

#endif // CLASSROOM_H
