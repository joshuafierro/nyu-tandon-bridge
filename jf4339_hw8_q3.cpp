#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);

void printArray(int arr[], int arrSize);
int main() {
int arr1[10] = {9, 2, 14, 12, -3}; int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);
return 0; }
void printArray(int arr[], int arrSize){
    int i;
    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

/*
Takes an arr, an array of integers, and its size, arrSize.
When called, it reorders the elements fo the array to appears in
reverse order.
*/
void reverseArray(int arr[], int arrSize){
    for (int low = 0, high = arrSize - 1; low < high; low++, high--){
      swap(arr[low], arr[high]);
   }
}

/*
Takes arr, an array of integers, and its size, arrSize. 
When called, the function alters arr so that the only numbers in it at 
the end are the even ones, which should remain in their original relative order.
Additionally, the function updates arrSize so it contains the new logical size 
of the array after removing the odd numbers
*/
void removeOdd(int arr[], int& arrSize){
    int count = 0;
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 != 0){
            //remove odd number
			for(int j=i; j<(arrSize-1); j++){
				arr[j]=arr[j+1];
			}
			count++;
	    }
    }
    arrSize -= count;
}

/*
Takes arr, an array of integers, and its size, arrSize. When called, the function
changes the order of numbers in arr so that all the odd numbers will appear first, and all
the even numbers will appear last.
*/
void splitParity(int arr[],int arrSize){
    int count = 0;
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 != 0){
            arr[count] = arr[i];
            count++;
        }
    }
}