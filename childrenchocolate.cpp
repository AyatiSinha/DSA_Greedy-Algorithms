#include <bits/stdc++.h>
using namespace std;

bool check (vector <int> &greed, vector <int> &chocolate) {
    int n = greed.size();
    int m = chocolate.size();
    sort (greed.begin(), greed.end());
    sort(chocolate.begin(), chocolate.end());
    int l = 0, r = 0;
    while (l < n && r < m) {
        if (greed[l] <= chocolate[r]) l++;
        r++;
    }
    if (l == n) return true;
    else return false;
}

int main () { 
    vector <int> chocolate = {4,2,1,2,1,3};
    vector <int> greed = {1,5,3,3,4};
    bool isPossible = check(greed,chocolate);
    cout << isPossible << endl;
    return 0;
}