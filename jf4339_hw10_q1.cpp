#include <iostream>
#include <string>
#include <vector>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){
    string userInput;
    int outWordsArrSize = 0;
    getline(cin, userInput);
    createWordsArray(userInput, outWordsArrSize);
    cout<<outWordsArrSize<<endl;
    return 0;
}

/*
When called, it will create and return a new array (of strings), 
that contains all the words in sentence. 
The function also updates the output parameter, outWordsArrSize, 
with the logical size of the new array that was created.
*/
string* createWordsArray(string sentence, int& outWordsArrSize){
    vector<string> wordsArray;
    string word = "";
    for(auto x : sentence){
        if(x == ' '){
            // cout<<word<<endl;
            wordsArray.push_back(word);
            word ="";
        }
        else{
            word += x;
        }
    }
    wordsArray.push_back(word);
    for(int i = 0; i < wordsArray.size(); i++){
        cout<<wordsArray[i]<<endl;
    }

    outWordsArrSize = wordsArray.size();
    // return wordsArray;
}