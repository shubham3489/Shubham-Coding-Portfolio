/*
Question - Write a C++ program to print the following pattern:
54321
54321
54321
54321
54321
*/

#include <iostream>
using namespace std;

int main(){
    int row, col;
    for(row=1; row<=5; row=row+1){
        for(col=5; col>=1; col=col-1){
            cout << col;
        }
        cout << endl;
    }
}