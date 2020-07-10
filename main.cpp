#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
first function in c++
takes a user input and displays it back in the terminal
*/
void getUserInput() {
    string userInput;
    cout << "waiting for your input.. \n";
    cin >> userInput;
    cout << "you typed: " + userInput <<endl;
}

int main() {
    string greeting = "Hello NYU Tandon!";
    // different way of doing an \n
    cout << greeting << endl;
    cout << 1 + 1 << endl;
    //calling helper function
    getUserInput();

    return 0;
}