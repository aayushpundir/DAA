#include <bits/stdc++.h>
using namespace std;

vector <int> Linear_Search(vector <int> vrr, int n, int key, int flag) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        count++;
        if(vrr[i] == key) {
            flag = 1;
            break;
        }
    }
    return {flag, count};
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        int flag = 0;
        vector <int> vrr;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vrr.push_back(x);
        }
        int key;
        cin >> key;
        vector <int> arr(2); 
        arr = Linear_Search(vrr, n, key, flag);
        if(arr[0] == 1) {
            cout << "Present ";
        }
        else {
            cout << "Not Present ";
        }
        cout << arr[1];
    }
}
