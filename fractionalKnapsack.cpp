#include <bits/stdc++.h>
using namespace std;

struct Item {
    int val;
    int weight;
};

bool comp (Item item1, Item item2) {
    return (double)item1.val/item1.weight >= (double)item2.val/item2.weight;
}

double fractionalKnapsack (vector <Item>& arr, int weight) {
    sort (arr.begin(), arr.end(), comp);
    double totVal = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if (arr[i].weight <= weight) {
            totVal += arr[i].val;
            weight -= arr[i].weight;
        }
        else {
            totVal += ((double)arr[i].val/arr[i].weight) * weight;
            break; 
        }
    }
    return totVal;
}

int main () { 
    vector <Item> arr = {{60, 10}, {100, 20}, {120, 30}};
    int capacity = 50;
    double ans = fractionalKnapsack (arr, capacity);
    cout << ans << endl;
    vector <Item> arr2 = {{500,30}};
    int capacity2 = 10;
    double ans2 = fractionalKnapsack (arr2, capacity2);
    cout << ans2 << endl;
    return 0;
}