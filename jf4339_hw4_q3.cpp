#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int usersDecimalNum;
    // read from a user a decimal number
    // and return it's binary representation
    cout << "Enter a decimal number:" << endl;
    cin >> usersDecimalNum;
    cout << "The binary represenation of "<< usersDecimalNum << " is ";
    
    while(usersDecimalNum > 0) {
        cout << usersDecimalNum % 2;
        usersDecimalNum /= 2;
    }
    cout<<endl;
}