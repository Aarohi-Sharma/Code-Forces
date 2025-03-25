#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<string> out(n);
    for(int i=0; i<n; i++){
        out[i]=arr[i][0];
        out[i]+=+arr[i][1];
        for(int j=3; j<arr[i].size(); j+=2){
            out[i]+=arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        cout<<out[i]<<endl;
    }
}
