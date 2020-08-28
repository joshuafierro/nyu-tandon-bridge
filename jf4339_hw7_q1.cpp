#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Implement a function:
int printMonthCalender(int numOfDays, int startingDay)
This function is given two parameters:
numOfDays - The number of days in the month
startingDay – a number 1-7 that represents the day in the week of the first day
in that month (1 for Monday, 2 for Tuesday, 3 for Wednesday, etc.).
 
The function should:
Print a formatted monthly calendar of that month
Return a number 1-7 that represents the day in the week of the last day in that 
*/

int printMonthCalender(int numOfDays, int startingDay);

int main(){
    int numOfDays, startingDay;
    cin>> numOfDays >> startingDay;
    printMonthCalender(numOfDays, startingDay);
    return 0;
}

int printMonthCalender(int numOfDays, int startingDay) {
    cout<<"Mon \t Tues \t Wed \t Thurs \t Fri \t Sat \t Sun"<<endl;
    for(int i = 1; i <= numOfDays; i++ ){
        if (i % 7 == 0){
            cout<<endl;
        }
        cout<<i << "\t";
    }
    cout<<endl;
    return numOfDays;
}

void myFunction(int numOfTabs){
    while(numOfTabs > 0){
        cout<<"\t"<<endl;
        numOfTabs--;
    }
}