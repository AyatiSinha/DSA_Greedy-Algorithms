#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> func (vector <vector <int>> &vec, vector <int> newInt) {
    vector <vector <int>> ans;
    int i = 0;
    int n = vec.size();
    while (i < n && vec[i][1] < newInt[0]) {
        ans.push_back(vec[i]);
        i++;
    }
    while (i < n && vec[i][0] <= newInt[1]) {
        newInt[0] = min (newInt[0], vec[i][0]);
        newInt[1] = max (newInt[1], vec[i][1]);
        i++;
    }
    ans.push_back(newInt);
    while (i < n) {
        ans.push_back(vec[i]);
        i++;
    }
    return ans;
}

int main () { 
    vector <vector <int>> vec = {{1,2},{3,4},{5,7},{8,10},{12,16}};
    vector <int> newInterval = {6,8};
    vector <vector<int>> res = func (vec, newInterval);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";   
        }
        cout << endl;
    }
    return 0;
}