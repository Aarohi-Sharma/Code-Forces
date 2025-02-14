#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int num=n;
    while(k!=0){
        int rem=num%10;
        if(rem==0) n/=10;
        else n-=1;
        num=n;
        k--;
    }
    cout<<n;
}
