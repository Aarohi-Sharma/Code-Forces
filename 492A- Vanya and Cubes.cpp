#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int sum=0, m=0, i;
    for(i=1; i<=t; i++){
        sum+=i;
        if(sum+m<=t) m+=sum;
        else break;
    }
    cout<<i-1;
}
