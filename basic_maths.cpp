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
void reverse(int x) {
    long long int res = 0;
    while( x){
        res = (res*10)+ x%10;
        x = x/10;
    }
    cout << int(res);
}
int main() {
    cout << "Basic maths!"<< endl;
    // countDigits(101);
    // countDigits2(101);
    // reverse(1234);
    
    return 0;
}
