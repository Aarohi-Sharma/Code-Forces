#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<vector<int>> arr(t, vector<int>(2));
    for(int i=0; i<t; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int num=t;
    vector<int> out(t);
    for(int i=0; i<num; i++){
        if(arr[i][0]%arr[i][1]==0) out[i]=0;
        else{
            int n=arr[i][0]/arr[i][1];
            out[i]=(arr[i][1]*(n+1))-arr[i][0];
        }
    }
    for(int i=0; i<num; i++){
        cout<<out[i]<<endl;;
    }
}
