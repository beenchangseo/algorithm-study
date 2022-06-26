/**
 * BaekJoon 1159번 농구경기
 **/

#include <bits/stdc++.h>

using namespace std;

int N, cnt[26];
string name, result;

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> name;
        cnt[name[0] -'a']++;
    }
    for (int j = 0; j < 26; ++j) {
        if (cnt[j] >= 5){
            result += (j+'a');
        }
    }
    if (result.size()==0){
        result = "PREDAJA";
    }
    cout << result;
    return 0;
}
