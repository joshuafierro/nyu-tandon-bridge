#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string userInput;
    cout<<"Please enter a line of text:"<<endl; 
    getline(cin, userInput);
    for(int i=0; i<userInput.length(); i++){
        if(isdigit(userInput[i])){
            userInput[i] = 'x';
        }
    }
    cout<<userInput<<endl;
    return 0;
}