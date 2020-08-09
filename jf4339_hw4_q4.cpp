#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    
    cout << "section a " << endl;

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
    double geometricMean = pow(total, 1.0/userSequenceLength);
    cout << "The geometric mean is: " << geometricMean << endl;

    cout << "section b " << endl;
    int userSequenceLengthPartB, userSequenceB, totalB = 1;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line." 
    << "End your sequence by typing -1: " << endl;
    do {
        cin >> userSequenceB;
        if(userSequenceB != -1){
            totalB *=userSequenceB;
            userSequenceLengthPartB++;
        }
    } while (userSequenceB != -1);
    
    cout << totalB << endl;
    geometricMean = pow(totalB, 1.0/userSequenceLengthPartB);
    cout << "The geometric mean is: " << geometricMean << endl;
}