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
    int attemptsLeft = 5;
    int rangeX = 1;
    int rangeY = 100;
    cout<< myRandomNumber <<endl;

    cout<< "I thought of a number between " << rangeX << " and " << rangeY <<"!" <<endl;
    for(int i = 0; i < 5; i++){

        cout<< "Try to guess it. Range: ["<<rangeX<<","<< rangeY<<"], Number of guesses left: " << attemptsLeft <<endl;

        attemptsLeft--;
        int numberOfGuesses = i + 1;
        int usersGuess;
        cin >> usersGuess;

        if(usersGuess == myRandomNumber) {
            cout<< "Congrats! You guessed my number in " << numberOfGuesses << " guesses" <<endl;
            break;
        }
        else if(attemptsLeft == 0) {
            cout<< "Out of guesses! My number was " << myRandomNumber <<endl;
        }
        else if(usersGuess < myRandomNumber) {
            cout<< "Your guess: " << usersGuess <<endl;
            cout<< "Wrong! My number is bigger."<<endl;
            if(usersGuess > rangeX){
                rangeX = usersGuess + 1;
            }
        }
        else if(usersGuess > myRandomNumber) {
            cout<< "Your guess: " << usersGuess <<endl;
            cout<< "Wrong! My number is smaller."<<endl;
            if(usersGuess < rangeY){
                rangeY = usersGuess - 1;
            }
        }
    }
}
