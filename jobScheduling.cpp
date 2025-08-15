#include <bits/stdc++.h>
using namespace std;

class Job {
    public:
    int id;
    int profit;
    int deadline;
    Job (int id, int profit, int deadline) {
        this -> id = id;
        this -> profit = profit;
        this -> deadline = deadline;
    }
};

bool comp (Job j1, Job j2) {
    return j1.profit > j2.profit;
}

int func (vector <Job> &vec) {
    sort (vec.begin(), vec.end(), comp);
    int maxi = 0;
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        maxi = max (maxi, vec[i].deadline);
    }
    int profit = 0;
    vector <int> hash (maxi, -1);
    for (int i = 0; i < n; i++) {
        for(int j = vec[i].deadline-1; j >= 0; j--) {
            if (hash[j] == -1) {
                hash[j] = vec[i].id;
                profit += vec[i].profit;
                break;
            }
        }
    }
    return profit;
}

int main () { 
    vector <Job> vec = {Job(1,40,4),Job(1,10,1),Job(3,40,1),Job(4,30,1)};
    int p = func (vec);
    cout << p << endl;
    return 0;
}