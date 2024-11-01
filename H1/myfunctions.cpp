#include <iostream>
#include "myfunctions.h"
#include <iomanip>
using namespace std;

void calcSum(int a, int b) {
    int sum;
    sum=a+b;
    cout << a << " plus " << b << " is " << sum << endl;
}

void calcDiv(int a, int b) {
    if(b==0) {
        cout << "When dividing, zero is not allowed" << endl;
    } else {
    double da = static_cast<double>(a);
    double db = static_cast<double>(b);
    double sum;
    sum=da/db;
    cout << a << " divided with " << b << " is " << setprecision(2) << sum << endl;
    }
}

int retSum(int a, int b) {
    int sum;
    sum=a+b;
    return sum;
}

float retDiv(int a, int b) {
    if(b==0) {
        cout << "When dividing, zero is not allowed" << endl;
        return 0;
    } else {
    float fa = static_cast<float>(a);
    float fb = static_cast<float>(b);
    float sum;
    sum=fa/fb;
    return sum;
    }
}

