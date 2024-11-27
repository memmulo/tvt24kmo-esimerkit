#include "myhttp.h"

#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myHttp obj;
    int x;
    cout<<"Anna ID\n";
    cin >> x;
    obj.getUsers(x);
    return a.exec();
}
