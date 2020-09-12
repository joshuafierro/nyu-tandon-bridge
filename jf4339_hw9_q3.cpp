#include <iostream>
#include <string>
#include <vector>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main(){
    return 0;
}

/*
returns the base address of the array (containing the positive numbers), and 
updates the output parameter outPosArrSize with the array’s logical size.
*/
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);

/*
returns the base address of the array (containing the positive numbers), 
and uses the pointer outPosArrSizePtr to update the array’s logical size.
*/
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);

/*
updates the output parameter outPosArr with the base address of the array 
(containing the positive numbers), and the output parameter outPosArrSize with the array’s logical size.
*/
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);

/*
uses the pointer outPosArrPtr to update the base address of the array 
(containing the positive numbers), and the pointer outPosArrSizePtr to 
update the array’s logical size.
*/
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);