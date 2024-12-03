#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"Start";
    connect(this, SIGNAL(readyToSay()),this,SLOT(sayHelloSlot()));
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}
