#include <bits/stdc++.h>
using namespace std;

vector <int> R_Binary_Search(vector <int> vrr, vector <int> arr, int key, int l, int h) {
    static int count = 0;
    static int flag = 0;
    int mid = (l + h) / 2;
    if(l <= h) {
        count ++;
        if(key == vrr[mid]) {
            flag = 1;
            return {flag, count};
        }
        else if(key > vrr[mid]) {
            return R_Binary_Search(vrr, arr, key, mid + 1, h);
        }
        else
            return R_Binary_Search(vrr, arr, key, l, mid - 1);
    }
    return {flag, count};
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        vector <int> vrr;
        cin >> n;
        int l = 0, h = n - 1;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vrr.push_back(x);
        }
        int key;
        cin >> key;
        vector <int> arr(2);
        arr = R_Binary_Search(vrr, arr, key, l , h);
        if(arr[0] == 1) {
            cout << "Present ";
        }
        else {
            cout << "Not Present ";
        }
        cout << arr[1];
    }
}