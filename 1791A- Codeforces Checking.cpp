#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<char> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<char> match={'c','o','d','e','f','o','r','c','e','s'};
    vector<string> out(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<match.size(); j++){
            if(arr[i]==match[j]){
                out[i]="YES"; 
                break;
            }
            else out[i]="NO";
        }
    }
    for(int i=0; i<n; i++){
        cout<<out[i]<<endl;
    } 
}
