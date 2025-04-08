#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> arr(t);
    vector<int> out(t);
    for(int i = 0; i < t; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < t; i++){
        if (arr[i] <= 1) out[i] = 1;
        else out[i] = arr[i] / 2;
    }
    for(int i = 0; i < t; i++){
        cout << out[i] << endl;
    }
}
