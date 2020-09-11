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
    int letterCount = 1;
    vector<char> letters;
    int numOfLetter[26];

    for (int i = 0; i < line.length(); i++){
        if(line[i] == ' '){
            wordCount++;
        }

        if(isalpha(line[i]) && line[i] != ' '){
            letters.push_back(line[i]);
        }
    }

    cout<<wordCount << "\t" <<"words"<<endl;
    sort(letters.begin(), letters.end());
    for(int i = 0; i < letters.size(); i++){
        if(i != 0 && letters[i] == letters[i-1]){
            letterCount++;
        }
        else if(letters[i] != letters[i-1]){
            cout<<letterCount << "\t" << letters[i]<<endl; 
            letterCount = 1;
        }      
    }
    
}