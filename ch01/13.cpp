/**
 * BaekJoon 3986/ 캔디팡을 생각해보자
 * 문자열을 세로로 세워서 Stack을 이용해 top == push ->pop
 **/

#include <bits/stdc++.h>

using namespace std;
int n, result=0;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        stack<char> stk;
        for (int j = 0; j < s.size(); ++j) {
            if (stk.size() && stk.top() == s[j]) {
                stk.pop();
            }else{
                stk.push(s[j]);
            }
        }
        if (!stk.size()) result++;
    }
    cout << result;
    return 0;
}

