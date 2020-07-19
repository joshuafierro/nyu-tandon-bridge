#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calculateCoinAmount(int dollars, int cents){
    int totalCents; 
    int dollarsToCents;
    int quarters, dimes, nickels, pennies;
    dollarsToCents = dollars * 100;
    totalCents = dollarsToCents + cents;
    quarters = totalCents / 25;
    totalCents -= (quarters * 25);
    dimes = totalCents / 10;
    totalCents -= (dimes * 10);
    nickels = totalCents / 5;
    totalCents -= nickels * 5;
    pennies = totalCents; 

    cout << quarters << " quarters " << dimes << " dimes " << nickels << 
    " nickels " << pennies << " pennies " <<endl; 
}

void howManyOfEachCoin(){
    int dollars;
    int cents;
    string userInput;

    cout << "Please enter your amount in the format of dollars and cents seperated by a space:" <<endl;
    cin >> dollars >> cents;
    // call helper function
    calculateCoinAmount(dollars, cents);

}