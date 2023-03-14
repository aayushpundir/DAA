#include <bits/stdc++.h>
using namespace std;

vector <int> RLinear_Search(vector <int> vrr, vector <int> arr, int n, int key) {
    static int count = 0;
    static int flag = 0;
    if(n >= 0) {
        count++;
        if(key == vrr[n]) {
            flag = 1;
            arr[0] = flag;
            arr[1] = count;
            return arr;
        }
        return RLinear_Search(vrr, arr, n - 1, key);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        vector <int> vrr;
        int count = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vrr.push_back(x);
        }
        int key;
        cin >> key;
        vector <int> arr(2);
        arr = RLinear_Search(vrr, arr, n - 1, key);
        if(arr[0] == 1) {
            cout << "Present ";
            cout << (n - arr[1]) + 1;
        }
        else {
            cout << "Not Present ";
            cout << n;
        }
    }
}