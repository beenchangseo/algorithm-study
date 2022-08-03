#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; stack<char> s;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        str += '\n';
        for(char ch : str){
            if (ch == ' ' || ch == '\n'){
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }else{
                s.push(ch);
            }
        }
    }
    return 0;

}