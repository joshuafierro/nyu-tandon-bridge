#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    double a,b,c;

    cout << "Please	enter value of a: ";
    cin >> a;
    cout << "Please	enter value of b: ";
    cin >> b;
    cout << "Please	enter value of c: ";
    cin >> c;

    double bSquared = pow(b,2.0);
    double numOfSolutions = bSquared - (4.0*a*c);
    double solution1 = sqrt(numOfSolutions)/(2.0*a);
    double solution2 = -b/(2.0*a);
    double leftX = solution1 + solution2;
    double rightX = solution2 - solution1;
    cout.precision(1);

    if(a == 0) {
        if(b == 0 && c != 0) {
            cout << "This equation has no solution" << endl; 
        }
        else if(b != 0 && (c == 0 || c != 0)) {
            cout << "This equation has a single real solution x=" << fixed << leftX << endl;
        }
        else if(a == 0 && b == 0 && c == 0) {
        cout << "This equation has an infinite number of solutions" << endl;
        }
    }
    else if(a != 0) {
        // discrimiate is always positive 
        if(a != 0 && b !=0 && c == 0) {
            cout << "This equation has a two real solutions x=" << fixed << leftX << " " << rightX << endl; 
        }
        if((b == 0 && c == 0) || (numOfSolutions == 0)) {
            cout << "This equation has a single real solution x=" << fixed << leftX << endl;
        }
        else if(b == 0 && c != 0) {
            if (numOfSolutions > 0) {
                cout << "This equation has a two real solutions x=" << fixed << leftX << " " << rightX << endl;
            }
            else if(numOfSolutions == 0) {
                cout << "This equation has a single real solution x=" << fixed << leftX << endl;
            }
            else if(numOfSolutions < 0) {
                cout << "This equation has no real solution" << endl;
            }
        }
        else if(b != 0 && c != 0) {
            if(numOfSolutions > 0) {
                cout << "This equation has a two real solutions x=" << fixed << leftX << " " << rightX << endl;
            }
            else if( numOfSolutions == 0) {
                cout << "This equation has a single real solution x=" << fixed << leftX << endl;
            }
            else if ( numOfSolutions < 0) {
                cout << "This equation has no real solution" << endl;
            }
        }
    }
}