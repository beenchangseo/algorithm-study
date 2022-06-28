/**
 * BaekJoon 9375번 /
 * 각 종류의 의상을 입는 경우의 수를 곱 해주면 된다.
 * 즉, 해당 종류의 의상 수 + 1(해당 종류를 입지 않는 경우)를 의상의 종류 모두 곱해준 뒤,
 * 1을 빼주면 된다(알몸인 경우 제외를 위해 -1을 해준다.).
 **/

#include <bits/stdc++.h>

using namespace std;

int testcase, n;
string a, b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> testcase;
    while (testcase--){
        map<string, int> _map;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a >> b;
            _map[b]++;
        }

        long long result = 1;

        for(auto m : _map){
            result *= ((long long)m.second+1);
        }
        result--;
        cout << result << "\n";
    }

    return 0;
}

