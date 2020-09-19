#include <iostream>
#include <string>
#include <vector>
using namespace std;

int* findMissing(int arr[], int n, int& resArrSize);

int main(){

    int testArr[10]={1,3,3,4,5,6,7,8,8,10}; 
    int sizeOfArr = 10;
    int newArrSize = 0;
    findMissing(testArr, sizeOfArr, newArrSize);
    return 0;
}

/*
Creates and returns a new array, that contains all the numbers in range {0, 1, 2, ... , n} 
that are not in arr. The function also updates the output parameter, resArrSize, 
with the logical size of the new array that was created.
*/
int* findMissing(int arr[], int n, int& resArrSize){
    int missingNumsArr[n];
    for(int i = 0; i < n; i++){
        if (arr[i] < n && i != n){
            missingNumsArr[i] = arr[i];
        }
        cout<<missingNumsArr[i]<<endl;
        // break;
    }
    // return missingNumsArr;
}