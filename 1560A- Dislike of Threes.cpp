#include <bits/stdc++.h>
using namespace std;
int findKthLikedNumber(int k) {
    int count = 0, num = 0;
    while (count < k) {
        num++;
        if (num % 3 != 0 && num % 10 != 3) {
            count++;
        }
    }
    return num;
}
int main() {
    int t, k;
    cin >> t;
    vector<int> out(t);
    int i=0, m=t;
    while (t--) {
        cin >> k;
        out[i]=findKthLikedNumber(k);
        i++;
    }
    for(int i=0; i<m; i++){
        cout<<out[i]<<endl;
    }
    return 0;
}
