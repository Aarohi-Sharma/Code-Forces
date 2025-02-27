#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    int n=min(a, b);
    int x=0, y=0;
    if(a==n){
        x=a;
        y=(b-a)/2;
    }
    else{
        x=b;
        y=(a-b)/2;
    }
    cout<<x<<' '<<y;
}
