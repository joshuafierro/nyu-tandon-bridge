#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string day;
    int durationInMinutes;
    int hour;
    int minutes;
    char separator;
    double cost_of_call;
    cout<< "Please enter day of call (e.g. Su Mo Tu We Tr Fr Sa)" <<endl;
    cin>> day;
    cout<< "Please enter the time the of call in 24-hour notation" <<endl;
    cin>> hour >> separator >> minutes;
    cout<< "Please enter the duration of call in minutes" <<endl;
    cin>> durationInMinutes;

    int timeStarted = (hour * 100) + minutes;

    const string MONDAY = "Mo";
    const string TUESDAY = "Tu";
    const string WEDNESDAY = "We";
    const string THURSDAY = "Th";
    const string FRIDAY = "Fr";
    const string SATURDAY = "Sa";
    const string SUNDAY = "Su";

    const double WEEKEND_RATE = 0.15;
    const double WEEKDAY_RATE_BETWEEN_SIX_AND_EIGHT = .40;
    const double WEEKDAY_RATE_OUTSIDE_SIX_AND_EIGHT = .25;
    const int EIGHT_AM = 800;
    const int SIX_PM = 1800;

    if(day == SUNDAY || day == SATURDAY) {
        cost_of_call = durationInMinutes * WEEKEND_RATE;
    }
    else {
        if(timeStarted > EIGHT_AM && timeStarted < SIX_PM) {
           cost_of_call = durationInMinutes * WEEKDAY_RATE_BETWEEN_SIX_AND_EIGHT;    
        }
        else if(timeStarted < EIGHT_AM && timeStarted > SIX_PM) {
            cost_of_call = durationInMinutes * WEEKDAY_RATE_OUTSIDE_SIX_AND_EIGHT;
        }
    }
    cout<< "The cost of the call is: " << cost_of_call <<endl;

    return 0;
}