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
int reverse(int x) {
    long long int res = 0;
    while( x){
        res = (res*10)+ x%10;
        x = x/10;
    }
    return int(res);
}
void palindrome( int num ){
    int dupli = reverse(num);
    if( dupli == num ){
        cout << "true";
    }else{
        cout<< "false";
    }
}
int main() {
    cout << "Basic maths!"<< endl;
    // countDigits(101);
    // countDigits2(101);
    // palindrome(101);
    return 0;
}
