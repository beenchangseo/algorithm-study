#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, dp[92];

    cin >> n ;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 3;
    for (int i = 5; i <= n; ++i) {
        dp[i] = dp[i-2] + dp[i-1];
    }
    cout << dp[n];
    return 0;
}