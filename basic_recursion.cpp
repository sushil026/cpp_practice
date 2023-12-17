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
// DOUBLE POINTER
void reverseArray( int l, int r, int arr[]) {
    if( l>=r ){ return; }
    swap( arr[l], arr[r]);// swap is predefined function in bits/stdc++.h
    rev( l+1, r-1, arr);
}
// SINGLE POINTER
void reverseArray2( int i, int n, int arr[]) {
    if ( i >= n-i-1 ){ return; }
    int l = i;
    int r = n-i-1;
    swap( arr[l], arr[r]);
    reverseArray2( i+1, n, arr);
}
// MULTIPLE RECURSION CALLS
int fibonacci( int x ){
    if( x<= 1){
        return x;
    }
    return fibonacci(x-1)+ fibonacci(x-2);
}
int main() {
    cout << "Basic recursion!"<< endl;
    // printCounting(5, 1);
    // printCountingTo1(5);
    // printSum(9, 0);
    // cout << printSum2(9);
    // factorial(3, 1);
    // cout << factorial2(3);
    // int n = 5;
    // int arr[n] = {1,2,3,4,5};
    // reverseArray( 0, n-1, arr);
    // reverseArray2( 0, n, arr);
    // COUT << fibonacci(4);
    return 0;
}
