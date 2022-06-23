/**
 * BaekJoon 2979번 트럭 주차
 **/

#include <bits/stdc++.h>

using namespace std;

int A,B,C, a,b;
int cnt[101];
int res = 0;
int main(){
    cin >> A >> B >> C;
    for (int i = 0; i < 3; ++i) {
        cin >> a >> b;
        for (int j = a; j < b; ++j) {
            cnt[j]++;
        }
    }
    for (int k = 0; k < 101; ++k) {
        if (cnt[k]){
            if (cnt[k] == 1) res = res + (A * cnt[k]);
            else if (cnt[k] == 2) res = res + (B * cnt[k]);
            else if (cnt[k] == 3) res = res + (C * cnt[k]);
        }
    }
    cout << res;
    return 0;
}
