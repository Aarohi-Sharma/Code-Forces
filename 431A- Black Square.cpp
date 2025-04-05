#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<int, int> mp;
    for(int i=0; i<4; i++){
        int a;
        cin>>a;
        mp[i+1]=a;
    }
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=mp[s[i]-'0'];
    }
    cout<<sum;
}
