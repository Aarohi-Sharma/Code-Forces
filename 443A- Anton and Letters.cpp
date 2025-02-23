#include <bits/stdc++.h>
using namespace std;
int main() {
    string inp;
    getline(cin, inp);
    set<char> letter;
    for(int i=0; i<inp.size(); i++){
        if(inp[i]>='a' && inp[i]<='z') letter.insert(inp[i]);
    }
    cout<<letter.size();
}
