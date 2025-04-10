#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        int n, m=0;
        cin>>n;
        string in;
        cin>>in;
        vector<int> out(26, 0);
        for(int i=0; i<in.size(); i++){
            if(out[in[i]-'A']==0){
                m+=2;
                out[in[i]-'A']=1;
            }
            else m+=1;
        }
        arr[i]=m;
    }
    for(int i=0; i<t; i++){
        cout<<arr[i]<<endl;
    }
}
