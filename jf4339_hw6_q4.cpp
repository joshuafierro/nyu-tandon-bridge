#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void printDivisors(int num);

int main(){
    printDivisors(100);
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