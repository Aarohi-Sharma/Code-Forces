#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string inp;
    cin>>inp;
    for(auto &x: inp){
        x=tolower(x);
    }
    unordered_map<char, int> mp;
    for(int i=0; i<inp.size(); i++){
        mp[inp[i]]++;
    }
    if(mp.size()==26) cout<<"YES";
    else cout<<"NO";
}
