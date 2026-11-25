/*
Question: Write a C++ program to print the following pattern:
12345
12345
12345
12345
12345
*/
#include <iostream>
using namespace std;

int main (){

    int row, col;
    for (row =1; row<=5; row++){
        for (col=1; col<=5; col++){
            cout <<col;
        }
        cout <<endl;
    }
    return 0;
}
