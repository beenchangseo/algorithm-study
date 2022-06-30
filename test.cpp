#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int T, x[2], y[2], r[2];

int main() {
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];
        double d = sqrt(pow((x[0]-x[1]),2) + pow((y[0]-y[1]),2));
        double r_sum = r[0] + r[1];
        double r_imsum = r[0] > r[1] ? r[0] - r[1] : r[1] - r[0];

        if (d == 0 && r[0] == r[1]) cout << -1 << "\n";
        else if (r_sum == d || r_imsum == d) cout << 1 << "\n";
        else if (r_imsum < d && d < r_sum) cout << 2 << "\n";
        else cout << 0 << "\n";
    }


    return 0;
}

