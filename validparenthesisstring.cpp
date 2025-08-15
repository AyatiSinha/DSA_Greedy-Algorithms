#include <bits/stdc++.h>
using namespace std;

bool func (string &s) {
    int n = s.length();
    int max = 0, min = 0;
    for (int i = 0; i < n; i++) {
        if (min < 0) return false;
        if (s[i] == '(') min ++, max++;
        else if (s[i] == ')') {
            if (min-1 < 0) {
                if (max > 0) max--;
                else return false;
            }
            else {min--; max--;}
        } 
        else {
            if (min-1 >= 0) min--;
            max++;
        }
    }
    if (min == 0) return true;
    return false;
}

int main () { 
    return 0;
}