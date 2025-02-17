#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h;
    cin>>n>>h;
    vector<int> height(n);
    for(int i=0; i<n; i++){
        cin>>height[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        if(height[i]<=h) sum+=1;
        else sum+=2;
    }
    cout<<sum;
}
