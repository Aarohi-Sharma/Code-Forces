#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans=0, mx=arr[n-1];
    for(int i=0; i<n-1; i++){
        ans+=mx-arr[i];
    }
    cout<<ans;
}
