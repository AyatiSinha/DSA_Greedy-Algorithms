#include <bits/stdc++.h>
using namespace std;

bool func (string &s) {
   int mini = 0, maxi = 0, n = s.length();
   for (int i = 0; i < n; i++)
   {
    if (s[i] == '(') {
        mini++;
        maxi++;
    }
    else if (s[i] == ')') {
        mini--;
        maxi--;
    }
    else {
        mini--;
        maxi++;
    }
    if (mini < 0) mini = 0;
    if (maxi < 0) return false;
   }
   return mini == 0; 
}

int main () { 
    string s = "()*)*()";
    bool val = func (s);
    cout << val << endl;
    return 0;
}