#include <iostream>
#include <string>
#include <vector>
using namespace std;

    // 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    /*
        1. Write a function int fib(int n) that returns the n-th element of the Fibonacci sequence.
        2. Write a program that prompts the user to enter a positive integer num, and then prints the 
            num’s elements in the Fibonacci sequence.
    */

int fib(int n);

int main(){
    int userInput;
    cout<< "Please enter a positive integer: ";
    cin >> userInput;

    cout<<"Recieved: " << fib(userInput)<<endl; 
    return 0;
}

int fib(int n){

    int index1 = 1, index2 = 1, element;

    if(n < 3){
        return 1;
    } else {
        for (int position = 3; position <= n; position++){
            element = index1 + index2;
            index1 = index2;
            index2 = element;
        }
        return element;
    }
}