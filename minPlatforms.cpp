#include <bits/stdc++.h>
using namespace std;

int func (vector <int> &arr, vector <int> &dep) {
    int n = arr.size();
    sort (arr.begin(), arr.end());
    sort (dep.begin(), dep.end());
    int count = 0, maxcount = 0;
    int i = 0, j = 0;
    while (i < n) {
        if (arr[i] <= dep [j]) {
            count ++;
            i++;
        }
        else {
            count--;
            j ++;
        }
        maxcount = max (count, maxcount);
    }
    return maxcount;
}

int main () { 
    vector <int> arr = {900,945,955,1100,1500,1800};
    vector <int> dep = {920,1200,1130,1150,1900,2000};
    int ans = func (arr, dep);
    cout << ans << endl;    
    return 0;
}