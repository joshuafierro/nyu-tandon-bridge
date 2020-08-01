#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int usersDecimalNum;
    int binaryRep = 0;
    // read from a user a decimal number
    // and return it's binary representation
    cout << "Enter a decimal number:" << endl;
    cin >> usersDecimalNum;
    cout << "The binary represenation of "<< usersDecimalNum 
    << " is " << binaryRep << endl;
}