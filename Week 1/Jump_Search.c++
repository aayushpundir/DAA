#include <bits/stdc++.h>
using namespace std;

int Jump_Search(vector<int> vrr, int n, int key) {
    int start = 0, end = sqrt(n), flag = 1;
    while(vrr[end] < key && start < n) {
        start = end;
        end += sqrt(n);
        if(end > n - 1)
            end = n;
    }
    for(; start <= end; start++) {
        if(vrr[start] == key) {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
        return start;
    else    
        return -1;
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        vector <int> vrr;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vrr.push_back(x);
        }
        int key;
        cin >> key;
        int Found = Jump_Search(vrr, n, key);
        cout << Found;
    }
}