#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<string> inp(n);
    for(int i=0; i<n; i++){
        inp[i]=to_string(arr[i]);
    }
    vector<int> out(n);
    for(int i=0; i<n; i++){
        out[i]=(inp[i][0]-'0')+(inp[i][1]-'0');
    }
    for(int i=0; i<n; i++){
        cout<<out[i]<<endl;
    } 
}
