#include <bits/stdc++.h>
using namespace std;

class Data {
    public:
    int start; int end; int position;
};

bool comp (Data d1, Data d2) {
    return d1.end < d2.end;
}

vector <int> func (vector <int> &start, vector <int> &end) {
    int n = start.size();
    vector <Data> arr(n);
    for (int  i = 0; i < n; i++) {
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].position = i+1;
    }
    sort (arr.begin(), arr.end(), comp);
    int freetime = arr[0].end;
    int count = 1;
    vector <int> pos;
    pos.push_back(arr[0].position);
    for (int i = 1; i < n; i++)
    {
        if (arr[i].start > freetime) {
            freetime = arr[i].end;
            count++;
            pos.push_back(arr[i].position);
        }
    }
    return pos;
}

int main () { 
    vector <int> start = {0,3,1,5,5,8};
    vector <int> end = {5,4,2,9,7,9};
    vector <int> ans = func (start, end);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }    
    return 0;
}