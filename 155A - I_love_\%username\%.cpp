#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx=arr[0];
    int mn=arr[0];
    int out=0;
    for(int i=1; i<n; i++){
        if(arr[i]>mx){
            mx=arr[i];
            out++;
        }
        else if(arr[i]<mn){
            mn=arr[i];
            out++;
        }
    }
    cout<<out;
}
