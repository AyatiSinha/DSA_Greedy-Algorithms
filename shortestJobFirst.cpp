#include <bits/stdc++.h>
using namespace std;

int main () { 
    vector <int> arr = {4,3,7,1,2};
    sort (arr.begin(), arr.end());
    int n = arr.size();
    int wt = 0, t = 0;
    for (int i = 0; i < n; i++) {
        wt += t;
        t += arr[i];
    }
    cout << (double)wt/n << endl;
    return 0;
}