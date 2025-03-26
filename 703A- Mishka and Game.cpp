#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(2));
    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int a=0;
    for(int i=0; i<n; i++){
        if(arr[i][0]>arr[i][1]) a++;
    }
    if(a>(n-a)) cout<<"Mishka";
    else if(a<(n-a)) cout<<"Chris";
    else cout<<"Friendship is magic!^^";
}
