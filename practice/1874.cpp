#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, m=0, x; stack<int> s;
    string ans;
    cin >> n;
    while(n--){
        cin >> x;
        if (x>m){
            while(x > m){
                s.push(++m);
                ans += '+';
            }
            s.pop();
            ans += '-';
        }else{
            bool found = false;
            if (!s.empty()){
                int top = s.top();
                s.pop();
                ans += '-';
                if (x==top) found = true;
            }
            if (!found){
                cout << "NO" << '\n';
                return 0;
            }
        }
    }
    for(auto x : ans){
        cout << x << '\n';
    }


    return 0;
}



