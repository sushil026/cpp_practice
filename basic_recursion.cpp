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
// PARAMETERISED METHOD
void printSum(int i, int sum){
    if( i< 1){
        cout << sum<< endl;
        return;
    }
    printSum( i-1, sum+i);
}
// FUNCTIONAL METHOD
int printSum2(int n){
    if( n == 0){
        return 0;
    }
    return n+printSum2(n-1);
}
// PARAMETERISED METHOD
void factorial(int i, int fac){
    if( i< 1){
        cout << fac<< endl;
        return;
    }
    factorial( i-1, fac*i);
}
// FUNCTIONAL METHOD
int factorial2(int i){
    if( i == 0){
        return 1;
    }
    return i*factorial2( i-1 );
}
int main() {
    cout << "Basic recursion!"<< endl;
    // printCounting(5, 1);
    // printCountingTo1(5);
    // printSum(9, 0);
    // cout << printSum2(9);
    // factorial(3, 1);
    // cout << factorial2(3);
    return 0;
}
