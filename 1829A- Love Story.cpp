#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s="codeforces";
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        int k=0;
        for(int j=0; j<10; j++){
            if(s[j]!=a[j]) k++;
        }
        arr[i]=k;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
