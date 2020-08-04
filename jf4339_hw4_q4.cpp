#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // part a
    int userSequenceLength;
    cout << "Please enter the length of the sequence: ";
    cin >> userSequenceLength;
    cout << "Please enter your sequence: " << endl;
    int sequence;
    int total = 1;
    for(int i = 0; i < userSequenceLength; i++) {
        cin >> sequence;
        total *=sequence;
    }
    cout << total << endl;
    double geometricMean = pow(total, 1.0/userSequenceLength);

    cout << "The geometric mean is: " << geometricMean << endl;
}