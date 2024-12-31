#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        long long n, b, ans = 0;
        cin >> n;
        vector<long long> v(n + 1);
        for (long long i = 1; i <= n; i++) {
            cin >> b;
            v[i] = b;
            if (ans == 0) {
                ans = abs(b - i);
            } else {
                ans = __gcd(ans, abs(b - i));
            }
        }
        cout << ans << endl;
    }

    return 0;
}
