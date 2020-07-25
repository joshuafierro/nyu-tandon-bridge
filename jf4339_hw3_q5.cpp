#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    double weight;
    double height;
    cout<<"Please enter weight (in pounds): ";
    cin>> weight;

    cout<<"Please enter height (in inches): ";
    cin>> height;
    double bmiRange = weight/pow(height,2);
    string weightStatus;

    if(bmiRange < 18.5) {
        weightStatus = "Underweight";
    }
    else if(bmiRange >= 18.5 && bmiRange <= 25) {
        weightStatus = "Normal";
    }
    else if(bmiRange >= 25 && bmiRange <= 30) {
        weightStatus = "Overweight";
    }
    else{
        weightStatus = "Obese";
    }
    cout<<bmiRange<<endl;
    cout<<"The weight status is: " << weightStatus <<endl;
    return 0;
}