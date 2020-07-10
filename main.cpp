#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string greeting = "Hello NYU Tandon!";
    // different way of doing an \n
    cout << greeting << endl;
    cout << 1 + 1 << endl;
    string userInput;
    cout << "waiting for your input.. \n";
    cin >> userInput;
    cout << "you typed: " + userInput <<endl;

    return 0;
}