#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> out(t);
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int len=0, l=0;
        for(int i=0; i<n; i++){
            int m;
            cin>>m;
            if(m==0) l+=1;
            if(m==1) l=0;
            len=max(len, l);
        }
        out[i]=len;
    }
    for (int i = 0; i < t; i++) {
        cout << out[i] << endl;
    }
}
