#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(3));
    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    vector<char> ans(n);
    for(int i=0; i<n; i++){
        if(arr[i][0]+arr[i][1]==arr[i][2]) ans[i]='+';
        else ans[i]='-';
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}
