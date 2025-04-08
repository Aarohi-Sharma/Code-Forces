#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<int> arr(t);
    vector<string> app={"1", "11", "111", "1111", "2", "22", "222", "2222", "3", "33", "333", "3333", "4", "44", "444", "4444", "5", "55",
        "555", "5555", "6", "66", "666", "6666", "7", "77", "777", "7777", "8", "88", "888", "8888", "9", "99", "999", "9999"};
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string m=to_string(n);
        int a=0;
        for(int j=0; j<app.size(); j++){
            if(app[j]!=m) a+=app[j].size();
            else if(app[j]==m){
                a+=app[j].size();
                break; 
            }
        }
        arr[i]=a;
    }
    for(int i=0; i<t; i++){
        cout<<arr[i]<<endl;
    }
}
