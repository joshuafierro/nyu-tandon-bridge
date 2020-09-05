#include <iostream>
#include <string>
#include <vector>
using namespace std;

int PIN[5] = {4,5,8,9,7};
int randomArr[10];

bool isCorrect(int arr1[], int arr2[]);
void printPINSelection();
void printRandomNumSelection();

int main(){
    srand((unsigned) time(0));
    printPINSelection();
    printRandomNumSelection();
    
    int userInput;
    int userPinArray[5];
    // get users pin
    for(int i = 0; i < 5; i++){
        cin>>userInput;
        userPinArray[i] = userInput;
    }
    
    if(isCorrect(userPinArray, randomArr)){
        cout<<"Your PIN is correct"<<endl;
    }
    else{
        cout<<"Your PIN is incorrect"<<endl;
    }
    return 0;
}

/*
checks if the pin value equals the random number index
*/
bool isCorrect(int arr1[], int arr2[]){
     for(int i = 0; i < 5; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
     }
     return true;
}

/*
prints out integers 0-9
*/
void printPINSelection(){
    cout<<"PIN: ";
    for(int i = 0; i < 10; i++){
        cout<< i <<" ";
    }
    cout<<endl;
}

/*
assigns random numbers to an array and and prints out the array
*/
void printRandomNumSelection(){
    cout<<"NUM: ";
    for(int i = 0; i < 10; i++){
        randomArr[i] = rand() % 9 + 1;
        cout<<randomArr[i]<<" ";
    }
    cout<<endl;
}