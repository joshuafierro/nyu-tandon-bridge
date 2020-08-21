#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

double eApprox(int n);

int main(){
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0;
}

double eApprox(int n){
    // e = 2.71828
    return pow((1.0 + 1.0/n), n);
}