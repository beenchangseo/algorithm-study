#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; vector<int> dp(1000001,0);
    cin >> n;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    for (int i = 5; i <= n; ++i) {
        if (i%2!=0 && i%3!=0)
            dp[i] = 1 + dp[i-1];
        else if (i%2==0 && i%3==0)
            dp[i] = min(dp[i/2]+1, dp[i/3]+1);
        else if (i%2==0)
            dp[i] = min(dp[i-1]+1, dp[i/2]+1);
        else if (i%3==0)
            dp[i] = min(dp[i-1]+1, dp[i/3]+1);
    }
    cout << dp[n];
    return 0;
}



