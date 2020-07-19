#include <iostream>
#include <string>
#include <vector>
using namespace std;

void totalTimeWorkedTogether(int johnDays, int johnHours, int johnMin, int billDays, int billHours, int billMin){
    const int MIN_IN_A_DAY = 1440;
    int combinedDaysIntoMin = (johnDays + billDays) * 60;
    int combinedHoursIntoMin = (johnHours + billHours) * 60;
    int totalMin = combinedDaysIntoMin + combinedHoursIntoMin + johnMin + billMin;

    int days = totalMin / MIN_IN_A_DAY;
    cout << "John: " << johnDays << " " << johnHours << " " << johnMin << " Bill: " << billDays << " " << billHours <<" " << billMin <<endl;
}

void coworkerBesties(){
    int johnDays, johnHours, johnMin;
    int billDays, billHours, billMin;
    int myVars[3] = {johnDays, johnHours, johnMin};
    
    for(int i = 0; i < 3; i++){
        // string name = {"John", "John", "John", "Bill", "Bill", "Bill"};
        string timeMeasurement[3] = {"days", "hours", "minutes"};
        cout << "Please enter the number of "<< timeMeasurement[i] <<" John "<<  "has worked:" <<endl;
        cin>> myVars[i];
    }

    for(int i = 0; i < 3; i++){
        // string name = {"John", "John", "John", "Bill", "Bill", "Bill"};
        string timeMeasurement[3] = {"days", "hours", "minutes"};
        cout << "Please enter the number of "<< timeMeasurement[i] <<" Bill "<<  "has worked:" <<endl;
        cin>> myVars[i];
    }

    totalTimeWorkedTogether(johnDays, johnHours, johnMin, billDays, billHours, billMin);
}

    // cout << "Please enter the number of days John has worked:" <<endl;
    // cin>>johnDays;
    // cout << "Please enter the number of hours John has worked:" <<endl;
    // cin>>johnHours;
    // cout << "Please enter the number of minutes John has worked:" <<endl;
    // cin>>johnMin;

    // cout << "Please enter the number of days Bill has worked:" <<endl;
    // cin>>billDays;
    // cout << "Please enter the number of hours Bill has worked:" <<endl;
    // cin>>billHours;
    // cout << "Please enter the number of minutes Bill has worked:" <<endl;
    // cin>>billMin;