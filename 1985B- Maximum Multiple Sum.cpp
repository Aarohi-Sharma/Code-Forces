#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> inp(t);
    vector<int> out(t);
    for(int k=0; k<t; k++){
        cin>>inp[k];
        int mx=0, a=0;
        for(int i=2; i<=inp[k]; i++){
            int sum=0;
            for(int j=1; (i*j)<=inp[k]; j++){
                sum+=(i*j);
            }
            mx=max(mx, sum);
            if(mx==sum) a=i;
        }
        out[k]=a;
    }
    for(int i=0; i<t; i++){
        cout<<out[i]<<endl;
    }
}
