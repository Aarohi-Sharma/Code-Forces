#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> arr(t);
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> in(n);
        int es=0, os=0;
        for(int i=0; i<n; i++){
            cin>>in[i];
            if(in[i]%2==0) es+=in[i];
            else os+=in[i];
        }
        if(es%2==os%2) arr[i]="YES";
        else arr[i]="NO";
    }
    for(int i=0; i<t; i++){
        cout<<arr[i]<<endl;
    }
}
