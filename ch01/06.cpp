/**
 * BaekJoon 11655번 ROT13
 **/

#include <bits/stdc++.h>

using namespace std;
string password;

int main(){
    getline(cin, password);
    for (int i = 0; i < password.size(); ++i) {
        if (password[i]>=65 && password[i]<91){
            if (password[i] + 13 > 90) password[i] = password[i]+13-26;
            else password[i] = password[i]+13;
        } else if (password[i]>=97 && password[i]<123){
            if (password[i] + 13 > 122) password[i] = password[i]+13-26;
            else password[i] = password[i]+13;
        }
    }

    cout << password;
    return 0;
}
