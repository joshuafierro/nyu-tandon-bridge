#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    double weight;
    double height;
    const double LBS_IN_KG = 0.453592;
    const double INCHES_IN_METERS = 0.0254;
    cout<<"Please enter weight (in pounds): ";
    cin>> weight;

    cout<<"Please enter height (in inches): ";
    cin>> height;
    
    weight *= LBS_IN_KG;
    height *= INCHES_IN_METERS;
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
    else {
        weightStatus = "Obese";
    }

    cout<<"The weight status is: " << weightStatus <<endl;
    return 0;
}