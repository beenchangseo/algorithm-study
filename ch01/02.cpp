/**
 * BaekJoon 10808번 알파벳 개수
 **/

#include <bits/stdc++.h>

using namespace std;

string str;
int cnt[26];
int main(){
    cin >> str;
    /*1번 방법*/
    for (char a : str) {
        cnt[a - 'a']++;
    }
    /*2번 방법*/
    /*for (int i = 0; i < str.size(); ++i) {
        cnt[str[i]-'a']++;
    }*/

    for (int i = 0; i < 26 ; ++i) {
        cout << cnt[i];
    }
    return 0;
}
