#include "firstclass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"FirstClass olio luotiin\n";
    objSecondClass=new SecondClass(this);
}

FirstClass::~FirstClass()
{
    qDebug()<<"FirstClass olio tuhottiin\n";

}
