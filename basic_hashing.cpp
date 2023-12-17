#include <bits/stdc++.h>
using namespace std;
void frequencyOfElements(){
    map<int, int> freq_map;
    int arr[] = {10,5,10,15,10,5};
    for( auto el: arr){
        cout<< el<< " ";
        freq_map[el]++;
    }
    cout<< endl;
    for( auto el: freq_map){
        cout<< el.first<< "-"<< el.second<< endl;
    }
    cout<< freq_map[20]; // gives output as 0 as no key-value pair is available with key as 20 
}
int main() {
    cout << "Basic Hashing!"<< endl;
    // frequencyOfElements()
    return 0;
}
