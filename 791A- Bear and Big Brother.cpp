#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, b;
    cin>>l>>b;
    int i=0;
    while(l<=b){
        i++;
        l=l*3;
        b=b*2;
    }
    cout<<i;
}
