#include <iostream>
#include <string>
#include <vector>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);

int main(){
    int userInput[6] = {5,2,11,7,6,4};
    int arraySize = sizeof(userInput)/sizeof(userInput[0]);
    oddsKeepEvensFlip(userInput, arraySize);
    return 0;
}

/*
This function gets an array of integers arr and its logical size arrSize. 
When called, it will reorder the elements of arr so that:
1. All the odd numbers come before all the even numbers
2. The odd numbers will keep their original relative order
3. The even numbers will be placed in a reversed order 
(relative to their original order).
*/
void oddsKeepEvensFlip(int arr[], int arrSize){

    vector<int> oddNums;
    vector<int> evenNums;
    vector<int> combinedNumArray;

    for(int i = 0; i < arrSize; i++ ){
        if(arr[i] % 2 != 0){
            oddNums.push_back(arr[i]);
        }
        else if(arr[i] % 2 == 0){
            evenNums.push_back(arr[i]);
        }
    }

    for(int num : oddNums){
        cout<<num<<endl;
        combinedNumArray.push_back(num);
    }
    for(int i = evenNums.size() - 1; i >= 0; i--){
        cout<<evenNums[i]<<endl;
        combinedNumArray.push_back(evenNums[i]);
    }
}