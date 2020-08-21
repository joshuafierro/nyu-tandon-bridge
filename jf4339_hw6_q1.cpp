#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fib(int n){
    return n;
}

int main(){
    int userInput;
    cout<< "Please enter a positive integer: ";
    cin >> userInput;

    cout<<"Recieved: " << fib(userInput)<<endl; 
    return 0;
}