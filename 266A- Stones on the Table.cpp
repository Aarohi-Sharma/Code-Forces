#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string patt;
    cin>>patt;
    string out;
    out+=patt[0];
    int j=0;
    for(int i=1; i<n; i++){
        if(out[j]!=patt[i]){
            out+=patt[i];
            j++;
        }
    }
    int m=n-out.size();
    cout<<m;
}
