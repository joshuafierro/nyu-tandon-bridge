#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Implement a number guessing game. The program should randomly choose an integer 
between 1 and 100 inclusive), and have the user try to guess that number.
*/

int main() {

    srand(time(0));
    int myRandomNumber = rand() % 100 + 1;
    int attempts = 5;
    bool gameOver;

    for(int i = 0; i < 5; i++){
        cout<< "I thought of a number between 1 and 100! " <<
        "Try to guess it. Range: [1, 100], Number of guesses left: " << attempts <<endl;
        attempts--;

        int usersGuess;
        cin >> usersGuess;

        if(usersGuess == myRandomNumber) {
            cout<<"Congrats! YOU WIN!" <<endl;
            break;
        }
        cout << "Your guess: " << usersGuess << endl;
        cout<< "Wrong the number was " << myRandomNumber <<endl;
    }
}
