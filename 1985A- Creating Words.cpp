#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        getline(cin, arr[i]);
    }
    for(int i=0; i<n; i++){
        char t=arr[i][0];
        arr[i][0]=arr[i][4];
        arr[i][4]=t;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
