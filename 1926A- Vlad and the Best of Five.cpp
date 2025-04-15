#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<char> out(t);
    for(int i=0; i<t; i++){
        string n;
        cin>>n;
        int ac=0, bc=0;
        for(int i=0; i<n.size(); i++){
            if(n[i]=='A') ac++;
            else bc++;
        }
        if(ac>bc) out[i]='A';
        else out[i]='B';
    }
    for (int i = 0; i < t; i++) {
        cout << out[i] << endl;
    }
}
