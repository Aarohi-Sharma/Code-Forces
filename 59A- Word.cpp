#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    int ucount=0, lcount=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]>='A' && s1[i]<='Z') ucount++;
        else if(s1[i]>='a' && s1[i]<='z') lcount++;
    }
    if(ucount>lcount){
        for(auto &x: s1){
            x=toupper(x);
        }
    }
    else if(lcount>=ucount){
        for(auto &x: s1){
            x=tolower(x);
        }
    }
    cout<<s1;
}
