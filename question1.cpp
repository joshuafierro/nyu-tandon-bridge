#include <iostream>
#include <string>
#include <vector>
using namespace std;

double calculateTotalMoney(int quarters, int dimes, int nickels, int pennies){
    // double total = 0;
    // const double dollar = 100;
    // (quarters * 4) +
    // (dimes*10) +
    // (nickels *5) +
    // (pennies);
    return 0;
}

void totalMoney(){
    int quarters, dimes, nickels, pennies;
    double total = 0;
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters?" <<endl;
    cin>>quarters;
    cout << "# dimes?" <<endl;
    cin>>dimes;
    cout << "# nickels?" <<endl;
    cin>>nickels;
    cout << "# pennies?" <<endl;
    cin>>pennies;



    cout <<"Your total balance is: " << quarters << " dollars and " << total << " cents." <<endl;
}