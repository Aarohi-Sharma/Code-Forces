#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    unordered_map<char, int> mp;
    for(int i=0; i<s1.size(); i++){
        mp[s1[i]]++;
    }
    int n=mp.size();
    if(n%2!=0) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
}
