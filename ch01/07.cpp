/**
 * BaekJoon 9996번 / 접두 접미 문자열 추출 후 (접두+접미)사이즈 > 문자열 체크 ex) ab*ab, ab
 **/

#include <bits/stdc++.h>

using namespace std;

int N;
string s, pattern, pre, suf;
int main(){
    cin >> N >> pattern;
    int position = pattern.find('*');
    pre = pattern.substr(0, position);
    suf = pattern.substr(position+1);

    for (int i = 0; i < N; ++i) {
        cin >> s;
        if (pre.size() + suf.size() > s.size()){
            cout << "NE\n";
        } else {
            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size()-suf.size())) cout << "DA\n";
            else cout << "NE\n";
        }
    }
    return 0;
}
