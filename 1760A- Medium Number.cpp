#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(3));
    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    for(auto &i: arr){
        sort(i.begin(), i.end());
    }
    vector<int> out(n);
    for(int i=0; i<n; i++){
        out[i]=arr[i][1];
    }
    for(int i=0; i<n; i++){
        cout<<out[i]<<endl;
    } 
}
