#include <bits/stdc++.h>
using namespace std;
int main() {
    string inp;
    cin>>inp;
    string out="";
    for(int i=0; i<inp.size(); i++){
        if(inp[i]=='.') out+='0';
        else if(inp[i]=='-' && inp[i+1]=='.'){
            out+='1';
            i++;
        }
        else if(inp[i]=='-' && inp[i+1]=='-'){
            out+='2';
            i++;
        }
    }
    cout<<(out);
}
