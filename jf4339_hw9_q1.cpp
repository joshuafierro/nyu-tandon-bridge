#include <iostream>
#include <string>
#include <vector>
using namespace std;

void numOfWordsAndLetters(string line);

int main(){

    string userInput;

    cout<< "Please enter a line of text:"<<endl;
    getline(cin,userInput);
    numOfWordsAndLetters(userInput);
    return 0;
}

/*
Reads in a line of text and outputs the number of words in the line and
the number of occurrences of each letter in alphabetical order.
*/
void numOfWordsAndLetters(string line){
    int wordCount = 1;

    for (int i = 0; i < line.length(); i++){
        if(line[i] == ' '){
            wordCount++;
        }
    }

    cout<<wordCount<<endl;
    
}