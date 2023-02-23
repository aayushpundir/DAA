#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        vector <int> vrr;
        int l = 0, h;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vrr.push_back(x);
        }
        int key;
        cin >> key;
        h = n-1;
        int count = 0, flag = 0;
        int mid;
        while(l < h) {
            count++;
            mid = (l + h)/2;
            if(key == vrr[mid]) {
                flag = 1;
                break;
            }
            else if(key > vrr[mid]) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        if(flag == 1) {
            cout << "Present ";
        }
        else {
            cout << "Not present ";
        }
        cout << count;
    }
}