#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() { 
    int usersInput;
    cout << "Please enter a positive integer: ";
    cin >> usersInput;

    for(int i = 1; i < usersInput; i ++) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }
}