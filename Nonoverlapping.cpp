#include <bits/stdc++.h>
using namespace std;

bool comp (vector <int> v1, vector <int> v2) {
    return v1[1] < v2[1];
}

int func (vector <vector<int>> vec) {
    sort (vec.begin(), vec.end(), comp);
    int freetime = vec[0][1];
    int count = 1;
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        if (vec[i][0] >= freetime) {
            count++;
            freetime = vec[i][1];
        }
    }
    return n - count;
}

int main () {
    vector <vector <int>> vec = {{0,2},{3,4},{0,5},{5,9},{7,9},{5,7}};
    int d = func(vec);
    cout << d << endl;
    return 0;
}