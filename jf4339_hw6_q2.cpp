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

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

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
    cout<<endl;
    cout<<endl;
    printPineTree(n, symbol);
    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){

    for(int i = 1; i <= n; i++){
        
        // for(int j = 0; j < m; j++){
        //     cout<<"+";
        // }
        for(int k = 1; k <= (n-i) + m; k++){
            cout<<" ";
        }
         for(int l = 1; l <= (i*2) - 1; l++){
            cout<<symbol;
        }
        cout<<endl;
    }
}
void printPineTree(int n, char symbol){
    // int numberOfTrees = n;

    // while(numberOfTrees != 0){
    //     for(int i = 0; i < n; i++){
    //         for(int k = n; k > i; k--){
    //             cout<<" ";
    //         }
    //         for(int l = 0; l < i; l++){
    //             cout<<" "<<symbol;
    //         }
    //         cout<<endl;
    //     }
    //     numberOfTrees--;
    // }
    for(int i = 0; i<=n; i++) {
        printShiftedTriangle(i+1,n-i,symbol);
    }
}