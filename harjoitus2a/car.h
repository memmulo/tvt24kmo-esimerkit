#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
    void printData();
};

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    double getWidth();
    void setWidth(double newWidth);
    double getHeight();
    void setHeight(double newHeight);
    double getArea();
    double getCircum();
    void numberInfo();
};

class Student
{
private:
    string name;
    int studentNumber;
    double average;
public:
    Student();
    string getName() const;
    void setName(const string &newName);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    double getAverage() const;
    void setAverage(double newAverage);
    void studentInfo();
};


#endif // CAR_H
