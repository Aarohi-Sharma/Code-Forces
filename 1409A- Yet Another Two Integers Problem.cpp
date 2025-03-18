#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(2));
    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        int a=abs(arr[i][0]-arr[i][1]);
        int b=a/10;
        int c=a%10;
        if(c==0) ans[i]=b;
        else ans[i]=b+1;
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}
