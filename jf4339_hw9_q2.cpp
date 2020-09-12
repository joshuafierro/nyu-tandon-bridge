#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
bool isAnagram(string str1, string str2); 
 
int main() {
 
    string firstSentenceEntered;
    string secondSentenceEntered;
 
    cout << "Check if two strings are anagrams." << endl;
    cout << "Please enter the first string: ";
    getline(cin, firstSentenceEntered);
    cout << "Now enter the second string: ";
    getline(cin, secondSentenceEntered);
 
 
    if(isAnagram(firstSentenceEntered,secondSentenceEntered)){
        cout << "The two strings are anagrams." <<endl;
    }else{
        cout << "The two strings are NOT anagrams."<<endl;
    }
    
    return 0;
}
 
bool isAnagram(string str1, string str2) 
{
    if (str1.length() !=  str2.length()){
        return false; 
    }
    
    sort(str1.begin(), str1.end()); 
    sort(str2.begin(), str2.end()); 

    for (int i = 0; i < str1.length(); i++){

        if (str1[i] != str2[i]){
            return false; 
        }
    }
  
    return true; 
}