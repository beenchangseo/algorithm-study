/**
 * BaekJoon 1629 / 재귀 함수 / 분할정복 / 지수법칙 / 모듈러 성질
 **/

#include <bits/stdc++.h>

using namespace std;
long long a,b,c;
int foo(long a,long b, long c){
    if (b == 1) return a % c;
    long long _c = foo(a, b/2, c);
    _c = (_c * _c) % c;
    if (b & 1) _c = (_c * a) % c;
    return _c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    cout << foo(a,b,c);
    return 0;
}

