#include <bits/stdc++.h>
using namespace std;
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
int main() {
    removeDupes();
    return 0;
}
