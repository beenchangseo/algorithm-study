#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long dp[1001][10], n, result=0;
    cin >> n;
    for (int i = 0; i <= 9; ++i) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j == 0) dp[i][j] = 1;
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 10007;
        }
    }
    for (int i = 0; i <= 9; ++i) {
        result = (result + dp[n][i]) % 10007;
    }
    cout << result;
    return 0;
}
