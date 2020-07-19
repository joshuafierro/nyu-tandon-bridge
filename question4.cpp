#include <iostream>
#include <string>
#include <vector>
using namespace std;

void doMaths(){
    int num1, num2;
    cout << "Please enter two positive integers, seperated by a space:" <<endl;
    cin>> num1 >> num2;
    int addEmUp = num1 + num2;
    int subtractEm = num1 - num2;
    int multiplyEm = num1 * num2;
    double divideEm = (double)num1 / (double)num2;
    int divEm = num1 / num2;
    int modEm = num1 % num2;

    cout << num1 << " + " << num2 << " = " << addEmUp <<endl;
    cout << num1 << " - " << num2 << " = " << subtractEm <<endl;
    cout << num1 << " * " << num2 << " = " << multiplyEm <<endl;
    cout << num1 << " / " << num2 << " = " << divideEm <<endl;
    cout << num1 << " div " << num2 << " = " << divEm <<endl;
    cout << num1 << " mod " << num2 << " = " << modEm <<endl;
}