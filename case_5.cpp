#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int ex = log2(k) + 1;
        cout << min(n, ex) << "\n";
    }
}
