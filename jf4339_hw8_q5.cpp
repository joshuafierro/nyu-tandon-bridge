#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string firstName, middleName, lastName;
    cout<<"Please enter your full legal name(including Middle Name or Inital): "<<endl;
    cin>>firstName >> middleName >> lastName;

    cout<<lastName<< ", " << firstName << " "<< middleName.substr(0,1) << "." <<endl;
    return 0;
}