/*

Question: Write a C++ program to print the following pattern:
1111
2222
3333
4444

*/

#include <iostream>
using namespace std;

int main () {

    int row, col;
    for(row=1; row<=4; row++){
        for (col=1; col<=4; col ++){
            cout <<row;
        }
        cout << endl;
    }
    return 0 ; 
}