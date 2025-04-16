#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> out(t);
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        int sm=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        for(int i=1; i<n; i++){
            if(arr[i]==arr[0]) continue;
            else sm+=arr[i]-arr[0];
        }
        out[i]=sm;
    }
    for (int i = 0; i < t; i++) {
        cout << out[i] << endl;
    }
}
