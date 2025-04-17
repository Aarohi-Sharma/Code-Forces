#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> out(t);
    for(int i=0; i<t; i++){
        vector<int> arr(4);
        for(int i=0; i<4; i++){
            cin>>arr[i];
        }
        int a=max(arr[0], arr[1]);
        int b=max(arr[2], arr[3]);
        sort(arr.begin(), arr.end());
        if((a==arr[2] && b==arr[3]) || (a==arr[3] && b==arr[2])) out[i]="YES";
        else out[i]="NO";
    }
    for (int i = 0; i < t; i++) {
        cout << out[i] << endl;
    }
}
