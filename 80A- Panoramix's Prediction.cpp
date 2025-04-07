#include <bits/stdc++.h>
using namespace std;
bool is_prime(int a){
    if(a==0 || a==1){
        return false;
    }
    for (int i = 2; i <= a/2; ++i) {
    if (a % i == 0) {
      return false;
      break;
    }
  }
}
int main() {
    int n, m, i;
    cin>>n>>m;
    for(int i=n+1; i<=m; i++){
        if(is_prime(i)==true && i<m){
            cout<<"NO";
            break;
        }
        else if(is_prime(i)==true && i==m){
            cout<<"YES";
            break;
        }
        else if(is_prime(i)==false && i==m) cout<<"NO";
    }

}
