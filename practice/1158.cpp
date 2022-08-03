#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    queue<int> q;
    int n,k;
    vector<int> answer;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        q.push(i);
    }
    cout << "<";
    while(!q.empty()){
        for (int i = 1; i <= k; ++i) {
            int front = q.front();
            int back = q.back();
            if (front == back){
                cout << front;
                q.pop();
                break;
            }
            q.pop();
            if (i==k){
                cout << front << ", ";
            }
            else q.push(front);
        }
    }

    cout << ">" << '\n';
    return 0;
}