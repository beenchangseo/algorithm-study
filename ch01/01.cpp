
/**
 * BaekJoon 2309번 일곱난쟁이
 **/

#include <bits/stdc++.h>
using namespace std;

int a[9];
int input[9] = {20, 7, 23, 19, 10, 15, 25, 8, 13};
int main(){
    for (int i = 0; i < 9; ++i) {
        a[i] = input[i];
    }
    sort(a, a+9);

    do {
        int sum = 0;
        for (int i = 0; i < 7; ++i) {
            sum += a[i];
        }
        if (sum == 100) break;
    }while(next_permutation(a, a+9));
    for (int i = 0; i < 7; ++i) {
        cout << a[i] << '\n';
    }
    return 0;
}