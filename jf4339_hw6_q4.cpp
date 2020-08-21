#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

/*
 implementing a program that reads from the user a positive
 integer (≥2), and prints all it’s divisors.
*/

void printDivisors(int num);

int main(){
    cout<<"Please enter a positive integer >= 2: ";
    int userInput;
    cin>>userInput;
    printDivisors(userInput);
    return 0;
}

void printDivisors(int num){
    for(int i=1; i <= num; i++){
        if(num % i == 0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}