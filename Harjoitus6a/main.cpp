#include "myclass.h"

#include <iostream>

using namespace std;

int main()
{
    MyClass *objMyClass=new MyClass;
    objMyClass->raiseMySignal();
    return 0;
}
