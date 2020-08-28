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

int printMonthCalendar(int numOfDays, int startingDay);
void printYearCalendar(int year, int startingDay);
bool isLeapYear(int year);

int main(){
    int year, startingDay;
    cout<<"Please enter the year and day of the week " << 
    "you would like to start on (Example: 1 is Monday, 2 is Tuesday etc.): " <<endl;
    
    cin>> year >> startingDay;
    printYearCalendar(year, startingDay);

    return 0;
}

int printMonthCalendar(int numOfDays, int startingDay) {
    cout<<"Mon \t Tue \t Wed \t Thr \t Fri \t Sat \t Sun"<<endl;
    int dayOfWeek = startingDay;
    for(int i = 1; i <= startingDay; i++ ){
        if(i < startingDay){
            cout<<"\t";
        }
    }

    for(int i =1; i <= numOfDays; i ++){
        cout<<i << "\t";
        
        if (dayOfWeek % 7 == 0){
            cout<<endl;
            dayOfWeek = 0;
        }
        dayOfWeek++;
    }
    cout<<endl;
    cout<<endl;
    return dayOfWeek;
}

/*
A method for determining if a year is a leap year in the Gregorian calendar system 
is to check if it is divisible by 4 but not by 100, unless it is also divisible by 400.

For example, 1896, 1904, and 2000 were leap years but 1900 was not.
Write a function that takes in a year as input and return true if the year is a leap year, 
return false otherwise.
*/

bool isLeapYear(int year){
    cout<<year % 4<<endl;
    if((year % 4 == 0) || (year % 400 == 0)){
        cout<<"true"<<endl;
        return true;
    }
    else if((year % 400 == 0) && (year % 100 == 0)){
        cout<<"true"<<endl;
        return true;
    }
    else{
        return false;
    }
}

/*
Implement a function:
void printYearCalender(int year, int startingDay)
This function is given two parameters:
year – an integer that represents a year (e.g. 2016)
startingDay – a number 1-7 that represents the day in the week of 1/1 in that
year (1 for Monday, 2 for Tuesday, 3 for Wednesday, etc.).
 
The function should use the functions from sections (a) and (b) in order to print a
formatted yearly calendar of that year.
Formatting Note: As the header for each month you should print the months’ name
followed by the year (e.g. March 2016).
*/

void printYearCalendar(int year, int startingDay) {
    int daysInMonth;

    for(int i = 0; i <= 12; i ++){
        switch (i)
        {
        case 1:
            cout<<"Januray " << year <<endl;
            daysInMonth = 31;
            break;
        case 2:
            cout<<"February " << year <<endl;
            if (isLeapYear(year)){
                daysInMonth = 29;
            }
            else{
                daysInMonth = 28;
            }
            break;
        case 3:
            cout<<"March " << year <<endl;
            daysInMonth = 31;
            break;
        case 4:
            cout<<"April " << year <<endl;
            daysInMonth = 30;
            break;
        case 5:
            cout<<"May " << year <<endl;
            daysInMonth = 31;
            break;
        case 6:
            cout<<"June " << year <<endl;
            daysInMonth = 30;
            break;
        case 7:
            cout<<"July " << year <<endl;
            daysInMonth = 31;
            break;
        case 8:
            cout<<"August " << year <<endl;
            daysInMonth = 31;
            break;
        case 9:
            cout<<"September " << year <<endl;
            daysInMonth = 30;
            break;
        case 10:
            cout<<"October " << year <<endl;
            daysInMonth = 31;
            break;
        case 11:
            cout<<"November " << year <<endl;
            daysInMonth = 30;
            break;
        case 12:
            cout<<"December " << year <<endl;
            daysInMonth = 31;
            break;
        
        default:
            break;
        }
        printMonthCalendar(daysInMonth, startingDay);
    }
    

}