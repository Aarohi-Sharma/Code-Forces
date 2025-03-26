#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<string> out(n);
    for(int i=0; i<n; i++){
        if(arr[i][0]=='a'){
            out[i]="YES";
        }
        else if(arr[i][1]=='b'){
            out[i]="YES";
        }
        else if(arr[i][2]=='c'){
            out[i]="YES";
        }
        else{
            out[i]="NO";
        }
    }
    for(int i=0; i<n; i++){
        cout<<out[i]<<endl;
    }
}
