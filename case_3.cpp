#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <ctype.h>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <streambuf>
#include <string>
#include <tuple>
#include <type_traits>
#include <variant>
#include <bit>
#include <compare>
#include <concepts>
#include <numbers>
#include <ranges>
#include <span>

using LL = long long;
#define int LL

using namespace std;

const int mod = 998'244'353;

int binpow(int a, int k) {
    int b = 1;
    while(k) {
        if (k & 1)
            b = b * a % mod;
        a = a * a % mod, k >>= 1;
    }
    return b;
}

signed main() {
    ios::sync_with_stdio(false), cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, d; cin >> n >> d;
        auto T = [&](int n){ return n < 0 ? 0LL : binpow(n + 1, n); };
        if (d % 2 == 0)
            cout << (T(d / 2) + T(d / 2 - 1)) % mod << '\n';
        else
            cout << 2 * T((d - 1) / 2) % mod << '\n';
    }
    return 0;
}
