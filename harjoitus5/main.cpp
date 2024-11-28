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
    return 0;
}
