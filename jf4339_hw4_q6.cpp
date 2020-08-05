#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() { 
    int usersInput;
    cout << "Please enter a positive integer: ";
    cin >> usersInput;

    for(int i = 2; i < usersInput; i ++) {
        int n = i;
        int even_count, odd_count;
        while (n > 0) { 
            even_count = 0;
            odd_count = 0 ;
            int rem = n % 10;
            if (rem % 2 == 0) {
                even_count++; 
            }
            else {
                odd_count++; 
            }
            n = n / 10; 
        } 
        if (even_count > odd_count) {
            cout << i << ": even -> "<< even_count << " odd-> "
            << odd_count << endl;
        }
    }
}