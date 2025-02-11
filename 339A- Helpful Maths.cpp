#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    sort(s1.begin(), s1.end());
    string s2;
    int count=0;
    for(auto &x: s1){
        if(x=='+') count++;
    }
    s2+=s1[count];
    for(int i=count+1; i<s1.size(); i++){
        s2+='+';
        s2+=s1[i];
    }
    cout<<s2;
}
