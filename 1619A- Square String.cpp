#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> arr(t);
    for(int i=0; i<t; i++){
        string in;
        cin>>in;
        if(in.size()%2!=0){
            arr[i]="NO";
        }
        else if(in.substr(0, in.size()/2)==in.substr(in.size()/2, in.size()/2)){
            arr[i]="YES";
        }
        else{
            arr[i]="NO";
        }
    }
    for(int i=0; i<t; i++){
        cout<<arr[i]<<endl;
    }
}
