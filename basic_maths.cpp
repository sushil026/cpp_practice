#include <iostream>
using namespace std;
void countDigits( int num ){
    int c = 0;
    while( num ){
        c++;
        num = num/10;
    }
    cout << c;
}
int main() {
    cout << "Basic maths!"<< endl;
    // countDigits(101);
    return 0;
}
