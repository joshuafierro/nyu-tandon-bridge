#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    int userInput;
    double usersRationalNumber;

    cout<< "Please enter a Real number: "<<endl;
    cin>> usersRationalNumber;
    cout<< "Choose your rounding method:"<<endl;
    cout<< "1. Floor Round"<<endl;
    cout<< "2. Ceiling Round"<<endl;
    cout<< "3. Round to the nearest whole number"<<endl;
    cin>> userInput;

    switch (userInput)
    {
    case FLOOR_ROUND:
        cout<<floor(usersRationalNumber)<<endl;
        break;
    case CEILING_ROUND:
        cout<<ceil(usersRationalNumber)<<endl;
        break;
    case ROUND:
        cout<<round(usersRationalNumber)<<endl;
        break;
    default:
        break;
    }

    return 0;
}