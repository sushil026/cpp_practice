#include <iostream>
using namespace std;
void printCounting( int x, int i){
    if( i > x){
        return;
    }
    cout << i<< endl;
    printCounting( x, i+1);
}
int main() {
    cout << "Basic recursion!"<< endl;
    printCounting(5, 1);
    return 0;
}
