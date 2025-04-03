#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> out(n);
    int a, b, c;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        if(a<b && b<c) out[i]="STAIR";
        else if(a<b && b>c) out[i]="PEAK";
        else out[i]="NONE";
    }
    for(int i=0; i<n; i++){
        cout<<out[i]<<endl;
    }
}
