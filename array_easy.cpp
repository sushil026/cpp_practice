#include <bits/stdc++.h>
using namespace std;

// utilises extra space to store distinct elements
void removeDupes(){
    vector<int> res;
    vector<int> arr = {1, 2, 3, 3, 3, 3};
      for (int i = 0; i < arr.size(); i++) {
        int k = arr[i];
        res.push_back(k);  
        while (i + 1 < arr.size() && arr[i + 1] == k) {
            i++;
        }
    }
    for( int el: res){
        cout << el << " ";
    }
}
// manipulates the available array to store distinct elements at beginning
void removeDupes2(){
    vector<int> res;
    vector<int> arr = {1, 2, 3, 3, 3, 3 };
    int ind = 0;
      for (int i = 0; i < arr.size(); i++) {
        int k = arr[i];
        arr[ind++] = k;
        while (i + 1 < arr.size() && arr[i + 1] == k) {
            i++;
        }
    }
    for( int i = 0; i< ind; i++){
        cout << arr[i] << " ";
    }
}
int main() {
    // removeDupes();
    // removeDupes2()
    return 0;
}
