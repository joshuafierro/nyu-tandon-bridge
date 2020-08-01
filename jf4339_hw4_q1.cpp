#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int usersInteger;
    cout << "Please enter a positive integer: ";
    cin >> usersInteger;

    int numnerOfLoops = 1;
    int evenNumber = 2;
    while(usersInteger >= numnerOfLoops) {
        cout << evenNumber << endl;
        evenNumber += 2;
        numnerOfLoops++;
    }

}