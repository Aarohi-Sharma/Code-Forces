#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<string> ans(n);
    for(int i=0; i<n; i++){
        int lsum=0, rsum=0;
        lsum=(arr[i][0]-'0')+(arr[i][1]-'0')+(arr[i][2]-'0');
        rsum=(arr[i][3]-'0')+(arr[i][4]-'0')+(arr[i][5]-'0');
        if(lsum==rsum) ans[i]="YES";
        else ans[i]="NO";
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}
