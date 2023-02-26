#include <bits/stdc++.h>
using namespace std;

int RLinear_Search2(vector <int> vrr, int key, int n, int i) {
    if(i < n) {
        if(vrr[i] != key) {
            return i - 1;
        }
        return RLinear_Search2(vrr, key, n, i + 1);
    }
    return n - 1;
}

vector <int> RLinear_Search(vector <int> vrr, int key, int n, int i) {
    if(i < n) {
        if(vrr[i] == key) {
            vector <int> v(2);
            v[0] = i;
            v[1] = RLinear_Search2(vrr, key, n, i);
            return v;
        }
        return RLinear_Search(vrr, key, n, i + 1);
    }
    return {-1, -1};
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        vector <int> vrr;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vrr.push_back(x);
        }
        int key;
        cin >> key;
        vector <int> arr(2);
        arr = RLinear_Search(vrr, key, vrr.size(), 0);
        if(arr[0] == -1 && arr[1] == -1) {
            cout << "Key Not Present";
        }
        else {
            cout << key <<" - "<< (arr[1] - arr[0]) + 1;
        }
    }
}