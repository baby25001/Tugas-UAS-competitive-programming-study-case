#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if(!(cin >> N)) return 0;
    vector<int> a(N);
    int MX = 0;
    for(int i=0; i<N; i++){
        cin >> a[i];
        MX = max(MX, a[i]);
    }

    vector<int> freq(MX + 1, 0);
    for(int x : a) freq[x]++;

    ll ans = 0;
    for (int v=1; v<=MX; ++v){
        if (freq[v] == 0) continue;
        for(int m=v+v; m<=MX; m+=v){
            if (freq[m] == 0) continue;
            if ((m^v) > m)
                ans += (ll)freq[v] * (ll)freq[m];
        }
    }

    cout << ans << "\n";
    return 0;

}
