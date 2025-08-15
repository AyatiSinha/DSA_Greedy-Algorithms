#include <bits/stdc++.h>
using namespace std;

bool func (vector <int> &arr) {
    int n = arr.size();
    int maxfind = 0;
    for(int i = 0; i < n; i++) {
        if (maxfind < i) return false;
        maxfind = max (maxfind, i+arr[i]);
        if (maxfind > n-1) return true;
    }
    return true;
}

int main () { 
    vector <int> arr = {2,3,1,0,4};
    cout << func(arr) << endl;
    return 0;
}