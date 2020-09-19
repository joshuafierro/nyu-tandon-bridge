#include <iostream>
#include <string>
#include <vector>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);
void printArray(string* arr, int arrSize);

int main(){
    string userInput;
    int outWordsArrSize = 0;
    string* sentenceArr;

    cout<<"Please provide a sentence:"<<endl;
    getline(cin, userInput);
    sentenceArr = createWordsArray(userInput, outWordsArrSize);
    printArray(sentenceArr, outWordsArrSize);

    return 0;
}

/*
When called, it will create and return a new array (of strings), 
that contains all the words in sentence. 
The function also updates the output parameter, outWordsArrSize, 
with the logical size of the new array that was created.
*/
string* createWordsArray(string sentence, int& outWordsArrSize){
    string* wordsArray = new string [1];
    string word;
    int wordCount = 0;
    int newArrSize = 1;
    int sentenceLength = sentence.length();
    
    for(int i = 0; i <= sentenceLength; i++){
        if(sentence[i] == ' ' || sentence[i] == '\0'){
            if(wordCount > 0){
                string* linesArr;
                linesArr = new string[newArrSize*2];
                for(int i = 0; i < wordCount; i++){
                    linesArr[i] = wordsArray[i];
                }
                delete []wordsArray;
                wordsArray = linesArr;
                newArrSize *= 2;
            }
            wordsArray[wordCount] = word;
            wordCount++;
            word = "";
        }
        else{
            word += sentence[i];
        }
    }
    outWordsArrSize = wordCount;
    return wordsArray;
}

void printArray(string* arr, int arrSize){
    cout<<"The new array has a size of " << arrSize << " and contains: "<<endl;
    for(int i = 0; i < arrSize; i++){
        cout<<arr[i]<<endl;
    }
}