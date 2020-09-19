#include <iostream>
#include <vector>
using namespace std;
 
int* createIntegerArr(int& integerArrSize);
vector<int> createIntegerVector();
void searchNumber(int* numArr, int numArrSize, int searchNum);
void searchNumberVector(vector<int> numsVector, int searchNum);
int main1();
int main2();
void printPrompt();
 
 
int main() {
    main1();
    main2();
  return 0;
}
 
int main1(){
    int numberToSearch;
    int integerArrSize;
    int* numArr = createIntegerArr(integerArrSize);
    
    cout<<"Please enter a number you want to search: "<<endl;
    cin>>numberToSearch;
    
    searchNumber(numArr, integerArrSize, numberToSearch);
    delete [] numArr;
    
    return 0;
}
 
int main2(){
    int numberToSearch;
    vector<int> numsVector = createIntegerVector();
    
    cout<<"Please enter a number you want to search: "<<endl;
    cin>>numberToSearch;
    
    searchNumberVector(numsVector, numberToSearch);
    return 0;
}
 
int* createIntegerArr(int& integerArrSize){
    int* numArr = new int[1];
    int numArrSize = 0;
    int numArrPhSize = 1;
    int currentEnteredNum;
    printPrompt();
    
    while(currentEnteredNum != -1){
        cin>>currentEnteredNum;
        if(numArrSize == numArrPhSize){
            int* newNumArr = new int[2*numArrPhSize];
            for(int i = 0; i < numArrSize; i++){
                newNumArr[i] = numArr[i];
            }
            delete [] numArr;
            numArr = newNumArr;
            numArrPhSize *= 2;
        }
        numArr[numArrSize] = currentEnteredNum;
        numArrSize++;
    }
    integerArrSize = numArrSize;
    return numArr;
}
 
 
vector<int> createIntegerVector(){
    vector<int> numsVector;
    int currentEnteredNum;
    
    printPrompt();
    
    while(currentEnteredNum != -1){
        cin>>currentEnteredNum;
        numsVector.push_back(currentEnteredNum);
    }
    
    return numsVector;
}

/*
Reads from the an array of positive integers ending with -1, 
and another positive integer num that the user wishes to search for.
*/
void searchNumber(int* numArr, int numArrSize, int searchNum){
    cout<< searchNum <<" shows in line(s)";
    for(int i = 0; i < numArrSize; i++){
        if(numArr[i] == searchNum){
            if(i < numArrSize){
                cout <<" "<< i + 1;
            }
            else{
                cout<<i + 1<<"."<<endl;
            }
        }
    }
    cout<<"."<<endl;
}

/*
Reads from the a vector of positive integers ending with -1, 
and another positive integer num that the user wishes to search for.
*/
void searchNumberVector(vector<int> numsVector, int searchNum){
    int i = 0;
    cout<< searchNum << " shows in line(s)";
    for(int i = 0; i < numsVector.size(); i++){
        if(numsVector[i] == searchNum){
            if(i < numsVector.size()){
                cout<<" "<< i + 1;
                }
                else{
                    cout<<i + 1<<"."<<endl;
                    }
        }
    }
    cout<<"."<<endl;
}

/*
Prompts the user to provide positive integes as input separated by a new line
*/
void printPrompt(){
    cout<<"Please enter a sequence of positive integers, each in a separated line."<<endl;
    cout<<"End your input by typing -1."<< endl;
}