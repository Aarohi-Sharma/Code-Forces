#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> out(t);
    for(int i=0; i<t; i++){
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        int c=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==k) c++;
        }
        if(c>0) out[i]="YES";
        else out[i]="NO";
    }
    for (int i = 0; i < t; i++) {
        cout << out[i] << endl;
    }
}
