#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> out(t);
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int c=0;
        for(auto &pos: mp){
            if(pos.second>1) c++;
        }
        if(c>0) out[i]="NO";
        else out[i]="YES";
    }
    for (int i = 0; i < t; i++) {
        cout << out[i] << endl;
    }
}
