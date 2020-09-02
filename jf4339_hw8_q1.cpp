#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    return 0;
}

/*
Implement the function: int minInArray(int arr[], int arrSize)
This function is given arr, an array of integers, and its logical size, arrSize. When called,
it returns the minimum value in arr.
*/
int minInArray(int arr[], int arrSize){
    int min;
    for(int i; i < arrSize; i++){        
        if(min < arr[i]){
            min = arr[i];
        }
    }
    return min;
}