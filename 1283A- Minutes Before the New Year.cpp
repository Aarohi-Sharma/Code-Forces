#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int h, m;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin>>h>>m;
        arr[i]=1440-((h*60)+m);
    }
    for(int i=0; i<t; i++){
        cout<<arr[i]<<endl;
    }
}
