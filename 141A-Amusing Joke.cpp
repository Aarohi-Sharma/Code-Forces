#include <bits/stdc++.h>
using namespace std;
int main() {
    string inp1, inp2, inp3;
    cin>>inp1>>inp2>>inp3;
    vector<int> arr1(26), arr2(26);
    for(int i=0; i<inp1.size(); i++){
        arr1[inp1[i]-'A']+=1;
    }
    for(int i=0; i<inp2.size(); i++){
        arr1[inp2[i]-'A']+=1;
    }
    for(int i=0; i<inp3.size(); i++){
        arr2[inp3[i]-'A']+=1;
    }
    for(int i=0; i<26; i++){
        if(arr1[i]!=arr2[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
