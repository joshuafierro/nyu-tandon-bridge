#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Write a program that, prints a ‘pine tree’ consisting of triangle of increasing sizes, filled 
with a character (eg. ‘*’ or ’+’ or ‘$’ etc).
Your program should interact with the user to read the number of triangles in the tree and
the character filling the tree.
*/

void printShiftedTriangle(int n, int m, char symbol){

    for(int i = 1; i <= n; i++){
        
        for(int j = 0; j < m; j++){
            cout<<"+";
        }
        for(int k = m; k > i; k--){
            cout<<" ";
        }
         for(int l = 0; l < i; l++){
            cout<<" "<<symbol;
        }
        cout<<endl;
    }
}
void printPineTree(int n, char symbol){}

int main()
{
    int n, m;
    char symbol;
    
    cout<<"Number of lines: ";
    cin>>n;
    cout<<"Numer of shifted spaces: ";
    cin>>m;
    cout<<"Symbol: ";
    cin>>symbol;
    printShiftedTriangle(n, m, symbol);
    return 0;
}