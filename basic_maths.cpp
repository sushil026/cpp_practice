#include <bits/stdc++.h>
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
void printDivisors( int x ){
    int c = 1;
    while( c<= x/2){
        if(!(x%c)){
            cout << c << " ";
        }
        c++;
    }
    cout << x;
}
void printDivisors2( int n ){
    for(int i = 1; i <= sqrt(n); i++)
	    //alternate: for(int i = 1; i*i <= n ; i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}
}
void checkIfPrime( int n ){
    int c = 0;
    for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			c++;
			if(i != n/i) c++;
		}
	if( c == 2) cout << "true";
	else cout << "false";
}
void gcd( int x, int y ){
    int c = 1;
    int res;
    while( c <= min(x,y)){
        if( x%c==0 && y%c==0){
            res = c;
        }
        c++;
    }
    cout << res;
}
int main() {
    cout << "Basic maths!"<< endl;
	// checkIfPrime(11);
    // countDigits(101);
    // countDigits2(101);
    // palindrome(101);
    // printDivisors(121);
    // printDivisors2(121);
	// gcd(12,9);
    return 0;
}
