#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int* findMissing(int arr[], int n, int& resArrSize);
void printNewArray(int* arr, int arrSize);
 
int main(){
    
    int arrSize = 6, *missingNumsArr, newArrSize;
    int arr[] = {0,1,2,4,5,6};
    
    missingNumsArr = findMissing(arr, arrSize ,newArrSize);
    
    cout<< "size of new array: "<< newArrSize <<endl;
    printNewArray(missingNumsArr, newArrSize);
    delete [] missingNumsArr;
    
    return 0;
 
}
 
/*
Creates and returns a new array, that contains all the numbers in range {0, 1, 2, ... , n} 
that are not in arr. The function also updates the output parameter, resArrSize, 
with the logical size of the new array that was created.
*/
int* findMissing(int arr[], int n, int& resArrSize){
    
    int count = n;
    int j = 0;
    int *tempArr = new int[n];
    int *missingArr = new int[count];
    
    for(int i = 0; i < n; i++){
        tempArr[i] = i;
        if(arr[i] < n){
            if(tempArr[arr[i]] != -1){
                tempArr[arr[i]] = -1;
                count--;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if (tempArr[i] != -1){
            missingArr[j] = tempArr[i];
            j++;
        }
    }
    
    delete [] tempArr;
    resArrSize = count;
    
    return missingArr;  
}

/*
Takes an array (arr) and the logical size of the passed in array (arrSize). 
Prints out the contents of the given array.
*/
void printNewArray(int* arr, int arrSize){
    for(int i = 0; i < arrSize; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}