#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    stack<char> s1, s2;
    string str;
    int n;

    cin >> str;
    scanf("%d", &n);
    for(auto ch : str){
        s1.push(ch);
    }
    while(n--){
        char cmd;
        scanf(" %c", &cmd);
        if (cmd == 'P'){
            char pushStr;
            scanf(" %c", &pushStr);
            s1.push(pushStr);
        }else if(cmd == 'L'){
            if (s1.empty()) continue;
            char top = s1.top();
            s1.pop();
            s2.push(top);
        }else if(cmd == 'D'){
            if (s2.empty()) continue;
            char top = s2.top();
            s2.pop();
            s1.push(top);
        }else if(cmd == 'B'){
            if (s1.empty()) continue;
            s1.pop();
        }
    }
    string anw1, anw2;
    while(!s1.empty()){
        anw1 += s1.top();
        s1.pop();
    }
    while(!s2.empty()){
        anw2 += s2.top();
        s2.pop();
    }
    reverse(anw1.begin(), anw1.end());
    cout << anw1 + anw2;



    return 0;
}



