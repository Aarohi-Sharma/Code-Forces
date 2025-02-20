#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string out;
    for(int i=0; i<n; i++){
        if(i==(n-1)) {
            if(n%2==0) out+="I love it";
            else out+="I hate it";
        }
        else if(i%2==0) out+="I hate that ";
        else if(i%2!=0) out+="I love that ";
    }
    cout<<out;
}
