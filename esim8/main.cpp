#include "cat.h"
#include "elephant.h"
#include <iostream>

using namespace std;

int main()
{
    Cat objCat;
    Elephant objElephant;

    objCat.setOwner("Liisa");
    objCat.setColor("oranssi");
    objCat.setWeight(4);

    objElephant.setZooName("Korkeasaari");
    objElephant.setColor("harmaa");
    objElephant.setWeight(3500);

    return 0;
}
