#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<vector<int>> arr(t, vector<int>(3));
    for(int i=0; i<t; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    for(auto &i: arr){
        sort(i.begin(), i.end());
    }
    vector<string> out(t);
    for(int i=0; i<t; i++){
        if(arr[i][1]+arr[i][2]>=10) out[i]="YES";
        else out[i]="NO";
    }
    for(int i=0; i<t; i++){
        cout<<out[i]<<endl;
    }
}
