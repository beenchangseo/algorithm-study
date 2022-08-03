#include <bits/stdc++.h>
using namespace std;
string chk(string str){
    stack<char> s;
    for(char ch : str){
        if (ch == '(') s.push(ch);
        else {
            if (s.empty()) return "NO";
            else s.pop();
        }
    }
    if (s.empty()) return "YES";
    else return "NO";
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string str, result;
        cin >> str;
        result = chk(str);
        cout << result << '\n';
    }
    return 0;
}
