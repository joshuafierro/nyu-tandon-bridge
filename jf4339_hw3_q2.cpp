#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string userName;
    int gradYear;
    int currentYear;
    cout<< "Please enter your name: ";
    cin>> userName;
    cout<< "Please enter your graduation year: ";
    cin>> gradYear;
    cout<< "Please enter current year: ";
    cin>> currentYear;

    int gradClass = gradYear - currentYear;
    const int FRESHMAN = 4;
    const int SOPHMORE = 3;
    const int JUNIOR = 2;
    const int SENIOR = 1;

    switch (gradClass)
    {
    case FRESHMAN:
        cout<< userName << ", you are a Freshman." <<endl;
        break;

    case SOPHMORE:
        cout<< userName << ", you are a Sophmore." <<endl;
        break;
    case JUNIOR:
        cout<< userName << ", you are a Junior." <<endl;
        break;
    case SENIOR:
        cout<< userName << ", you are a Senior." <<endl;
        break;
    default:
        cout<< userName << ", you Graduated." <<endl;
        break;
    }
    
    return 0;
}
