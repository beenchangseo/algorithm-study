#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n-i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2*i-1; ++j) {
            if (j==0 || j == (2*i-2)||i==n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }



    return 0;
}


