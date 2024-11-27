#include "firstclass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"FirstClass olio luotiin\n";
    //Luodaan SecondClass luokan olio objSecondClass
    //Asetetaan nykyinen olio objSecondClass olion parentiksi
    //objSecondClass tuhoutuu, kun nykyinen olio tuhoutuu
    objSecondClass=new SecondClass(this);
}

FirstClass::~FirstClass()
{
    qDebug()<<"FirstClass olio tuhottiin\n";

}
