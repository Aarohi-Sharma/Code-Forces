#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pc=0, out=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0) pc+=arr[i];
        else{
            if(pc>0) pc-=1;
            else out+=1;
        }
    }
    cout<<out;
}
