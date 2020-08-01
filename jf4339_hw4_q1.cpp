#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int usersInteger;
    cout << "Please enter a positive integer: ";
    cin >> usersInteger;
    cout<<endl;
    cout << "section a" << endl;

    int numberOfLoops = 1;
    int evenNumber = 2;
    while(usersInteger >= numberOfLoops) {
        cout << evenNumber << endl;
        evenNumber += 2;
        numberOfLoops++;
    }

    evenNumber = 2;
    cout<<endl;
    cout << "section b" << endl;
    for(int i = 1; i <= usersInteger; i++) {
        cout << evenNumber << endl;
        evenNumber += 2;
    }

}