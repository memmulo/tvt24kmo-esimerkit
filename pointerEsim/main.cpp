#include <iostream>

using namespace std;

void calcSum(int a, int b)
{
    int sum=a+b;
    cout<<"Kokonaislukujen summa = "<<sum<<endl;
}

void calcSum(double a, double b)
{
    double sum=a+b;
    cout<<"Desimaalilukujen summa = "<<sum<<endl;
}

void calcSum(float a, float b)
{
    float sum=a+b;
    cout<<"Desimaalilukujen summa = "<<sum<<endl;
}

int main()
{
    calcSum(4,5);
    float a=5.0, b=6.0;
    double c=7.0, d=8.0;
    calcSum(a,b);
    calcSum(c,d);
    return 0;
}
