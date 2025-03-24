#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int main() {
    int n, m;
    cin>>n>>m;
    vector<int> arr={1, 2, 3, 4, 5, 6};
    int x=max(n, m);
    int c=0;
    int d=6;
    for(int i=x-1; i<arr.size(); i++){
        c++;
    }
    if(c==0) cout<<"0/1";
    else if(c==6) cout<<"1/1";
    else if(gcd(c, d)!=1){
        int y=gcd(c, d);
        c/=y;
        d/=y;
        cout<<to_string(c)<<'/'<<to_string(d);
    }
    else{
        cout<<to_string(c)<<"/6";
    }
}
