#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Write a program that reads a positive integer n from the user and prints out a nxn
multiplication table. The columns should be spaced by a tab.
*/

int main() {
    cout<<"Please enter a positive integer:"<<endl;
    int userInput;
    cin >> userInput;

    for (int i = 1; i <= userInput; i++) {
        
        for(int j = 1; j <= userInput; j++) {
            cout << j * i;
            cout << "\t";
        }
        cout << endl;
    }
}