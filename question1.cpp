#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calculateTotalMoney(int quarters, int dimes, int nickels, int pennies){
    double total = 0;
    const double dollar = 100;
    const int quartersInDollar = 25;
    const int dimesInDollar = 10;
    const int nickelsInDollar = 5;
    total = ((quarters * quartersInDollar) + (dimes * dimesInDollar) + (nickels * nickelsInDollar) + (pennies)) / dollar;
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