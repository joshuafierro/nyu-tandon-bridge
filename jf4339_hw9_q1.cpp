#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string userInput;

    cout<< "Please enter a line of text:"<<endl;
    cin>> userInput;
    return 0;
}

/*
Reads in a line of text and outputs the number of words in the line and
the number of occurrences of each letter in alphabetical order.
*/
string numOfWordsAndLetters();