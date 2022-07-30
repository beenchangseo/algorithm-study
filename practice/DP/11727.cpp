#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; vector<int> dp(1001,0);
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;

    for (int i = 4; i <= n; ++i) {
        dp[i] = (dp[i-1] + dp[i-2]*2) % 10007;
    }

    cout << dp[n];
    return 0;
}



