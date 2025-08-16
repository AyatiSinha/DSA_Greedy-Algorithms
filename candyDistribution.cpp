#include <bits/stdc++.h>
using namespace std;

//using slope approach

int distribution (vector <int> &ratings) {
    int n = ratings.size();
    if (n == 0) return 0;
    int sum = 1, i = 1;
    while (i < n) {
        if (ratings[i] == ratings[i-1]) {
            sum++;
            i++;
            continue;
        }
        int peak = 1;
        while (i < n && ratings[i] > ratings[i-1]) {
            peak++;
            sum += peak;
            i++;
        }
        int down = 1;
        while (i < n && ratings[i] < ratings[i-1]) {
            sum += down;
            down++;
            i++;
        }
        if (peak < down) sum += (down - peak);
    }
    return sum;
}

int main () { 
    vector <int> ratings = {0,2,4,7,6,5,4,3,2,1,1,1,2,3,4,2,2,1,1,1};
    int s = distribution(ratings);
    cout << s << endl;
    return 0;
}