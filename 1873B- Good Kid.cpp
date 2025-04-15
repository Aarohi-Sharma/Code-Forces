#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> out(t);
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> inp(n);
        for(int i=0; i<n; i++){
            cin>>inp[i];
        }
        sort(inp.begin(), inp.end());
        int prod=1;
        for(int i=0; i<n; i++){
            if(i==0) inp[i]=inp[i]+1;
            prod*=inp[i];
        }
        out[i]=prod;
    }
    for (int i = 0; i < t; i++) {
        cout << out[i] << endl;
    }
}
