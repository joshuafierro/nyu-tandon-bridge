#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calculateTotalMoney(int quarters, int dimes, int nickels, int pennies){
    double total = 0;
    const double dollar = 100;
    total = ((quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies)) / dollar;
    cout <<"Your total balance is: " << total <<endl;
}

void totalMoney(){
    int quarters, dimes, nickels, pennies;
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters?" <<endl;
    cin>>quarters;
    cout << "# dimes?" <<endl;
    cin>>dimes;
    cout << "# nickels?" <<endl;
    cin>>nickels;
    cout << "# pennies?" <<endl;
    cin>>pennies;
    calculateTotalMoney(quarters, dimes, nickels, pennies);
}