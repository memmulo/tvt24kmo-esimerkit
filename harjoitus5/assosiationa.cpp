#include "assosiationa.h"

AssosiationA::AssosiationA(ClassB value):objectB(value)
{}

string AssosiationA::getBinfo()
{
    return objectB.getInfo();
}

void AssosiationA::sefBinfo(string value)
{
    objectB.setInfo(value);
}


