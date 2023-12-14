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
void countDigits2( int num ){
    string str = to_string(num);
    cout << str.size();
}
int main() {
    cout << "Basic maths!"<< endl;
    // countDigits(101);
    // countDigits2(101);
    return 0;
}
