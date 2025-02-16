#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string inp;
    cin>>inp;
    int ac=0, dc=0;
    for(int i=0; i<n; i++){
        if(inp[i]=='A') ac++;
        else if(inp[i]=='D') dc++;
    }
    if(ac>dc) cout<<"Anton";
    else if(dc>ac) cout<<"Danik";
    else cout<<"Friendship";
}
