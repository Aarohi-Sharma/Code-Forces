#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    vector<string> ans(t);
    for(int i=0; i<t; i++){
        if(arr[i]>=1900) ans[i]="Division 1";
        else if(arr[i]>=1600 && arr[i]<=1899) ans[i]="Division 2";
        else if(arr[i]>=1400 && arr[i]<=1599) ans[i]="Division 3";
        else ans[i]="Division 4";
    }
    for(int i=0; i<t; i++){
        cout<<ans[i]<<endl;
    }
}
