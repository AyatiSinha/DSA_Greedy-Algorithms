#include <bits/stdc++.h>
using namespace std;

bool check (vector <int> &arr) {
    int f = 0, t = 0;
    for (int v : arr) {
        if (v == 5) f++;
        else if (v == 10) {
            if (f) {f--; t++;}
            else return false;
        }
        else {
            if (f && t) {
                f--;
                t--;
            }
            else if (f >= 3) {
                f -= 3;
            }
            else return false;
        }
    }
    return true;
}

int main () { 
    vector <int> arr = {5,5,5,10,20};
    bool isPossible = check (arr);
    cout << isPossible << endl;
    return 0;
}