#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr(4);
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    unordered_map<int, int> mp;
    for(int i=0; i<4; i++){
        mp[arr[i]]++;
    }
    int n=mp.size();
    cout<<4-n;
}
