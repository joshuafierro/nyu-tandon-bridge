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
    cout << "The binary represenation of "<< usersDecimalNum << " is ";
    
    int counter = 1;
    while(usersDecimalNum != 0) {
        binaryRep += (usersDecimalNum % 2) * counter;
        usersDecimalNum /= 2;
        counter *= 10;
    }
    cout << binaryRep <<endl;
}