#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int usersDecimal;
    string romanNumeral;

    cout << "Enter a decimal number:"<< endl;
    cin >> usersDecimal;
    // while loop with if else checking if a certain number can subtract into it
    const int usersOriginalDecimal = usersDecimal;
    while(usersDecimal > 0) {
        if((usersDecimal - 1000) >= 0) {
            usersDecimal -= 1000;
            romanNumeral.append("M");
            cout << "subtracted properly by 1000" << endl;
        }
        else if((usersDecimal - 500) >= 0) {
            usersDecimal -= 500;
            romanNumeral.append("D");
            cout << "subtracted properly by 500" << endl;
        }
        else if((usersDecimal - 100) >= 0) {
            usersDecimal -= 100;
            romanNumeral.append("C");
            cout << "subtracted properly by 100" << endl;
        }
        else if((usersDecimal - 50) >= 0) {
            usersDecimal -= 50;
            romanNumeral.append("L");
            cout << "subtracted properly by 50" << endl;
        }
        else if((usersDecimal - 10) >= 0) {
            usersDecimal -= 10;
            romanNumeral.append("X");
            cout << "subtracted properly by 10" << endl;
        }
        else if((usersDecimal - 5) >= 0) {
            usersDecimal -= 5;
            romanNumeral.append("V");
            cout << "subtracted properly by 5" << endl;
        }
        else if((usersDecimal - 1) >= 0) {
            usersDecimal -= 1;
            romanNumeral.append("I");
            cout << "subtracted properly by 1" << endl;
        }
    }
    cout << usersOriginalDecimal << " is " << romanNumeral << endl;
}