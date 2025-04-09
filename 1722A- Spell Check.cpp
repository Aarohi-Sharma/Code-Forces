#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> arr(t);
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string in;
        cin>>in;
        if(n!=5){
            arr[i]="NO";
            continue;
        }
        sort(in.begin(), in.end());
        if(in=="Timru") arr[i]="YES";
        else (arr[i]="NO");
    }
    for(int i=0; i<t; i++){
        cout<<arr[i]<<endl;
    }
}
