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
void frequencyOfLetters(){
    map<char, int> freq_map;
    string str = "Whispers of autumn leaves descend";
    for( auto el: str){
        freq_map[el]++;
    }
    cout<< endl;
    cout<< freq_map['W']; // gives output as the value at key-value pair is available with key as 'W'
}
void highestLowest(){
    map<int, int> freq_map;
    vector<int> arr = {10,5,10,15,10,5};
    for( auto el: arr){
        cout<< el<< " ";
        freq_map[el]++;
    }
    cout<< endl;
    int n = arr.size();
    int max_fr = 0;
    int min_fr = n;
    int min_el = 0;
    int max_el = 0;
    for( auto it: freq_map){
        if( it.second > max_fr ){
            max_fr = it.second;
            max_el = it.first;
        }
        if( it.second < min_fr ){
            min_fr = it.second;
            min_el = it.first;
        }
    }
    cout<< max_el<< " " << min_el;
}
int main() {
    cout << "Basic Hashing!"<< endl;
    // frequencyOfElements();
    // frequencyOfLetters();
    // highestLowest();
    return 0;
}
