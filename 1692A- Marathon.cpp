#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<vector<int>> arr(t, vector<int>(4));
    for(int i=0; i<t; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    vector<int> ans(t);
    for(int i=0; i<t; i++){
        int c=0;
        for(int j=1; j<4; j++){
            if(arr[i][j]>arr[i][0]) c++;
        }
        ans[i]=c;
    }
    for(int i=0; i<t; i++){
        cout<<ans[i]<<endl;
    }
}
