#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++){
        for(auto &x: arr[i]) x=tolower(x);
    }
    vector<string> out(n);
    for(int i=0; i<n; i++){
        if(arr[i]=="yes") out[i]="YES";
        else out[i]="NO";
    }
    for(int i=0; i<n; i++) cout<<out[i]<<endl;
}
