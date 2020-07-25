#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string day;
    int durationInMinutes;
    double timeOfDay;
    double cost_of_call;
    cout<<"Please enter day of call (e.g. Mo Tu We Tr Fr Sa Su)"<<endl;
    cin>> day;
    cout<<"Please enter the time the of call in 24-hour notation"<<endl;
    cin>> timeOfDay;
    cout<<"Please enter the duration of call in minutes"<<endl;
    cin>> durationInMinutes;

    const string MONDAY = "Mo";
    const string TUESDAY = "Tu";
    const string WEDNESDAY = "We";
    const string THURSDAY = "Th";
    const string FRIDAY = "Fr";
    const string SATURDAY = "Sa";
    const string SUNDAY = "Su";

    if(day == SUNDAY || day == SATURDAY) {
        cost_of_call = durationInMinutes * 0.15;
    }
    else {
        if(timeOfDay > 7.9 && timeOfDay <18) {
           cost_of_call = durationInMinutes * 0.40;    
        }
        else if(timeOfDay < 8 && timeOfDay > 18) {
            cost_of_call = durationInMinutes * 0.25;
        }
    }
    cout<<"The cost of the call is: " << cost_of_call <<endl;

    return 0;
}