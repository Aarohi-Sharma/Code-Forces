#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(3));
    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    vector<string> out(n);
    for(int i=0; i<n; i++){
        if(arr[i][0]+arr[i][1]==arr[i][2]) out[i]="YES";
        else if(arr[i][1]+arr[i][2]==arr[i][0]) out[i]="YES";
        else if(arr[i][0]+arr[i][2]==arr[i][1]) out[i]="YES";
        else out[i]="NO";
    }
    for(int i=0; i<n; i++){
        cout<<out[i]<<endl;
    }
}
