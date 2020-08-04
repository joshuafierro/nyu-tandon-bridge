#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int usersInput;
    cout << "Please enter a positive integer: ";
    cin >> usersInput;

    usersInput *= 2;
    // top triangle
    for(int i=0; i < usersInput; i++) {
        for(int j=0; j < i; j++) {
            cout << " ";
         }

        for(int k = usersInput; k > i; k--) {
            cout << " *";
        }
        cout<<endl;
    }

    // bottom triangle
    for(int i=0; i < usersInput; i++) {
        for(int j=usersInput; j > i; j--) {
            cout << " ";
         }

        for(int k = 0; k < i; k++) {
            cout << " *";
        }
        cout<<endl;
    }
}