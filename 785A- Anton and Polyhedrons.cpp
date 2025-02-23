#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int out=0;
    for(int i=0; i<n; i++){
        if(arr[i]=="Tetrahedron") out+=4;
        else if(arr[i]=="Cube") out+=6;
        else if(arr[i]=="Octahedron") out+=8;
        else if(arr[i]=="Dodecahedron") out+=12;
        else if(arr[i]=="Icosahedron") out+=20;
    }
    cout<<out;
}
