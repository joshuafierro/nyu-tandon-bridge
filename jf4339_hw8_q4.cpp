#include <iostream>
#include <string>
#include <vector>
using namespace std;

int const PIN = 45897;
int arr[10];

int main(){
    cout<<"PIN: ";
    for(int i = 0; i < 10; i++){
        cout<< i <<" ";
        arr[i] = rand() % 9 + 1;
    }
    cout<<endl;
    cout<<"NUM: ";
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}