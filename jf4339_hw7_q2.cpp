#include <iostream>
#include <string>
#include <vector>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main(){
    return 0;
}

/*
a. Write a function:
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) The function takes as an input a positive integer num (≥ 2), and updates two output parameters with the number of num's proper divisors and their sum.
For example, if this function is called with num=12, since 1, 2, 3, 4 and 6 are 12s proper divisors, the function would update the output parameters with the numbers 5 and 16. Note:
*/
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){

}
/*
b. Use the function you wrote in section (a), to implement the function:
bool isPerfect(int num)
This functions is given positive integer num (≥ 2), and determines if it is perfect number or not.
*/

bool isPerfect(int num){
    return true;
}

/*
c. Use the functions you implemented in sections (a) and (b), to write a program that reads from the user a positive integer M (≥ 2), and prints:
• All the perfect numbers between 2 and M.
• All pairs of amicable numbers that are between 2 and M (both numbers must be in the
range).
*/