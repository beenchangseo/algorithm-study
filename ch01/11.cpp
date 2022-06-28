/**
 * BaekJoon 1213번 팰린드롬 / 홀수가 2개 이상 X / 반례를 먼저 생각 해보기
 **/

#include <bits/stdc++.h>

using namespace std;
string str;
int cnt[26], is_odd;
string ret, mid, tmp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        cnt[str[i]-'A']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] & 1){
            is_odd++;
            mid = i+'A';
            cnt[i]--;
        }
        if (cnt[i] != 0 && cnt[i] % 2 == 0){
            for (int j = 0; j < cnt[i]/2; ++j) {
                ret.push_back(i+'A');
            }
        }
        if (is_odd == 2) break;
    }
    tmp = ret;
    reverse(ret.begin(), ret.end());
    if (is_odd == 2) cout << "I'm Sorry Hansoo\n";
    else cout<<tmp<<mid<<ret;
    return 0;
}

