#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, T;
    cin >> T;
    for (int k = 0; k < T; ++k) {
        vector<int> dp(1001,0);
        cin >> n;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for (int i = 4; i <= n; ++i) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout << dp[n] << endl;
    }

    return 0;
}



