#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    int userInput;
    double usersRationalNumber;

    cout<< "Please enter a Real number: " <<endl;
    cin>> usersRationalNumber;
    cout<< "Choose your rounding method:" <<endl;
    cout<< "1. Floor Round" <<endl;
    cout<< "2. Ceiling Round" <<endl;
    cout<< "3. Round to the nearest whole number" <<endl;
    cin>> userInput;

    switch (userInput) {
    case FLOOR_ROUND:
        if (usersRationalNumber < 0) {
            cout<< int(usersRationalNumber) - 1 <<endl;
        } 
        else {
          cout<< int(usersRationalNumber) <<endl;  
        }
        break;
    case CEILING_ROUND:
        if(usersRationalNumber < 0) {
            cout<< int(usersRationalNumber) <<endl;
        }
        else {
            cout<< int(usersRationalNumber) + 1 <<endl;
        }
        break;
    case ROUND:
        if ((usersRationalNumber < 0) && (usersRationalNumber - (int)usersRationalNumber) <= -0.5) {
            if((int)usersRationalNumber <= -0.5) {
            cout<< (int)usersRationalNumber - 1 <<endl;
            }
            else{
            cout<< int(usersRationalNumber) <<endl;
            }
        }
        else if((usersRationalNumber - (int)usersRationalNumber) >= 0.5) {
            cout<< int(usersRationalNumber) + 1 <<endl;
        }
        else {
            cout<< int(usersRationalNumber) <<endl;
        }
        break;
    default:
        break;
    }

    return 0;
}