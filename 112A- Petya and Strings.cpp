#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    string s1, s2;
    cin>>s1>>s2;
    for (auto& x : s1) { 
        x = tolower(x); 
    } 
    for (auto& x : s2) { 
        x = tolower(x); 
    } 
    int res=s1.compare(s2);
    if(res==0) cout<<0;
    else if(res<0) cout<<-1;
    else if(res>0) cout<<1;
}
