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
    vector<char> letters;
    int numOfLetter[26];

    for (int i = 0; i < line.length(); i++){
        if(line[i] == ' '){
            wordCount++;
        }

        if(isalpha(line[i]) && line[i] != ' '){
            // if char exists in arry then just increment 
            // if(any_of(line[i]))
            letters.push_back(line[i]);
        }
    }

    cout<<wordCount << "\t" <<"words"<<endl;
    sort(letters.begin(), letters.end());
    for(auto letter : letters){
        cout<<letter<<endl;
    }
    
}