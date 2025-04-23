#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<char>> inp(n, vector<char>(m));
    string out="";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>inp[i][j];
            if(inp[i][j]=='C' || inp[i][j]=='M' || inp[i][j]=='Y'){
                out="#Color";
            }
        }
    }
    if(out=="") out="#Black&White";
    cout<<out;
}
