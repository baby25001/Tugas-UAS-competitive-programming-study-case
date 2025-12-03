#include <bits/stdc++.h>
using namespace std;

int fpb(int a, int b){
    if (a==0){
        return b;
    }
    return fpb(b%a, a);
}

signed main(){
    int n,a;
    cin >> n;
    int prev =-1;
    for (int i=1; i<=n; i++){
        cin >> a;
        if(prev == -1){
            prev = a;
            continue;
        } else {
            prev = fpb(prev,a);
        }
    }

    if (prev > 1){
        cout << 1 << endl;
        cout << prev << " " << 1 << endl;
    } else {
        cout << 2 << endl;
        cout << 12 << " " << 6 << endl;
        cout << 3 << " " << 2 << endl;
    }

    return 0;
}
