#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(string str);

int main(){
    string userInput;
    cin >> userInput;
    isPalindrome(userInput);
    return 0;
}

/*
Implement a function:
bool isPalindrome(string str)
This function is given a string str containing a word, and returns true if and only if str is
a palindrome.
*/
bool isPalindrome(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower); 
    string reversedStr(str);
    reverse(reversedStr.begin(), reversedStr.end());
    if (str == reversedStr){
        cout<< str << " " << reversedStr<<endl; 
        cout<<"TRUE"<<endl;
        return true;
    }
    return false;
}
