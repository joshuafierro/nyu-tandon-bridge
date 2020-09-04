#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string userInput;
    cout<<"Please enter a line of text:"<<endl; 
    getline(cin, userInput);
    cout<<userInput<<endl;
    return 0;
}