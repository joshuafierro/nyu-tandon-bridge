#include <iostream>
#include <string>
#include <vector>
using namespace std;

static int SIZE_OF_ARRAY = 20;
int minInArray(int arr[], int arrSize);
void whereNumAppears(int num, int arr[]);

int main(){
    int numbers[SIZE_OF_ARRAY];
    int userInput;

    cout<<"Please enter 20 integers separated by a space: "<<endl;
    for(int i = 0; i < SIZE_OF_ARRAY; i++){
        cin >> userInput;
        numbers[i] = userInput;
    }
    int answer = minInArray(numbers, SIZE_OF_ARRAY);
    cout<<"The minimum value is "<<answer<<", and it is located in the following indices: ";
    whereNumAppears(answer, numbers);
    cout<<endl;
    return 0;
}

/*
This function is given arr, an array of integers, and its logical size, arrSize. 
When called, it returns the minimum value in arr.
*/
int minInArray(int arr[], int arrSize){
    int min = arr[0];
    for(int i = 1; i < arrSize; i++){        
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

/*
This function prints out the index or indicies from which the given number (num)
appears in an array.
*/
void whereNumAppears(int num, int arr[]){
    for (int i = 0; i < arr[SIZE_OF_ARRAY - 1]; i++){
        if(arr[i] == num){
            cout<<i<<" ";
        }
    }
}