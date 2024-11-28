#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include "classb.h"

#include <iostream>
using namespace std;

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    string getBinfo();
    void sefBinfo(string);
};

#endif // ASSOSIATIONA_H
