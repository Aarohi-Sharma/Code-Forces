#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    set<int> dragons;
    for(int i=k; i<=d; i+=k){
        dragons.insert(i);
    }
    for(int i=l; i<=d; i+=l){
        dragons.insert(i);
    }
    for(int i=m; i<=d; i+=m){
        dragons.insert(i);
    }
    for(int i=n; i<=d; i+=n){
        dragons.insert(i);
    }
    cout<<(int)dragons.size();
}
