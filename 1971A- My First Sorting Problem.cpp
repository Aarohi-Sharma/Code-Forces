#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<vector<int>> inp(t, vector<int>(2));
    for(int i=0; i<t; i++){
        cin>>inp[i][0]>>inp[i][1];
        sort(inp[i].begin(), inp[i].end());
    }
    for(int i=0; i<t; i++){
        cout<<inp[i][0]<<" "<<inp[i][1]<<endl;
    }
}
