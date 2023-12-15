#include <iostream>
using namespace std;
void printCounting( int x, int i){
    if( i > x){
        return;
    }
    cout << i<< endl;
    printCounting( x, i+1);
}
void printCountingTo1( int x ){
    if( x == 0 ){
        return;
    }
    cout << x<< endl;
    printCounting( x-1);
}
int main() {
    cout << "Basic recursion!"<< endl;
    // printCounting(5, 1);
    // printCountingTo1(5);
    return 0;
}
