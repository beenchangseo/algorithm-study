#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int T, x[2], y[2], r[2];

int main() {
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];
        double d = sqrt(pow((x[0]-x[1]),2) + pow((y[0]-y[1]),2));
        double r_sum = r[0] + r[1];
        double r_imsum = r[0] > r[1] ? r[0] - r[1] : r[1] - r[0];

        if (d == 0 && r[0] == r[1]) cout << -1 << "\n";
        else if (r_sum == d || r_imsum == d) cout << 1 << "\n";
        else if (r_imsum < d && d < r_sum) cout << 2 << "\n";
        else cout << 0 << "\n";
    }


    return 0;
}
{
  "type": "service_account",
  "project_id": "probit-push-test",
  "private_key_id": "2e8d73dddcde330a9e10d1156b5cb273682aa9b4",
  "private_key": "-----BEGIN PRIVATE KEY-----\nMIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQDNaJWnbzxb00JG\nfUBUrD1Q5y8eHtrYWwvuLtiavbKzDBVc/XDmKR6XFl+Tlytjsl8eUbFPztzv/Rik\n9eF0qTVPGnpDlDKsLw5l0R2GrFkZ1tWTty43tMP2Vl/1nWammxEHwSnkdRvz5euZ\n4gGjz9YmVbg56mfs/Zv1LxoLmoQPxhxtKHguTBtE69eVtgDQgOkPyvRFtPvZ0Mqp\n34MMxhgYeskJIz+SNf3MDuadrzZY4ft3PxgdVK4h5MXNMoAn5iKdmtrBkThMRRkW\nF3mOHGQ4n6usQgZz1OKiehMXFUP0zDPxeG1T6LkKN3uat+z+Iulj5nm0OnjVYybK\n47zxHEgDAgMBAAECggEAGTfT18CSWnuvUVQjR8H1rS8U28/R8moLJuzdbvIHNHAx\nVz9OUxONS+NVTJtsmkrV3rUM3c151oTuN6JwUZBMmS+Y/x78saL9U4a+5z/VmJSF\nmCMPK4un22BzW4Y9igrTpm4SpJe0HNeHe1cB+IiVtBMmEQY0SCZCtXFY8z+/Iuhp\nWmGFvxCSSki2Mk3g+WnZJKryvzn7NUvux/z2O0oe+gdpnlhkytaST8g3sc8hMylG\nE7ykqaZK3XZl82GWwRf++/+xTd6uwa+tQZXXcbqterm2Tfva3+Mc/BWXzDGJIILu\nmgJkLiolM5IAT9kPXhNC47goMSTT5oZPsMmpXl8uEQKBgQDmXOevREWU0UPrqjU2\nZWwwoYq4OQ69mqSVuN1z1ngQz9TTVGuUSgbICVimskIBpLn8l/WZyaUh/38GJmg1\n00zmOLqI5v4OIVy7otUTY5Z9i7bYr4vM/Ou13VSVeRnGF6kFQG/JRTCCvdRpw8Mb\nZJJzpgaSQV1yWqJwN6CN9BKNlQKBgQDkRLktLs3IuzZiDl9HSnlfMwExGUoWTroL\ndFtlC+nL2EIQwhSJ5gRpSv/TzfARshrY+k8EVLy0Cm5LVdy9bD8gplWOUfPuqHGo\nTrLOy1KS0x2bkk994R3WD/Y23N/E0Hjs/b6xJf/SFW637fK+aO2Gox1w66wOtXr2\nnqxt6+cpNwKBgQDmR08PJHdOGZcE+QPymZZ6UrHiEJ+MqA8I4GD3kBg77hY5HzXf\nadS3mKg3ExDqpamKOLm5/xoFD2wCUNhxngVMSr8lZYvnwi/6Hf9UP4RLgiPJHkrp\nIpfaGCOavBEotbQvXMeicnjY6TxycdATDQlddEUzZQYt7y5ccS8dWDRHtQKBgQCs\nXni2dbFO8o+OW+v2mXYtPQaZXM9lKO2z2JlrJCPXmeXJYcTAnMCYAdpMxiWSNzuu\nvNUOIC6ehYHjwWJ+Z08ECJZycdARV4D75vF+1mn0FRc2crU0CNnO2x7BLuiKZiHq\nU3G7s0YKDcUdfsDep700/dctfcjfEotXz1nFZ22W4QKBgQC1b/twn/O/9mlxqmkO\nVeWEmSnmEPLZbO9lJzBmWqGP8RfkcURoKeE7IW//geGGLj+uhPhQJdpZkfhxT7qH\nkqDCmQF2ka/bLgr0X1mX2wqjwsL5nnHnPcv+faOfiXT9fyRPWNM7/t1HCcZliHkd\nyjnoDCBO4nDmIYwZHI0oDK3HmQ==\n-----END PRIVATE KEY-----\n",
  "client_email": "firebase-adminsdk-ehapk@probit-push-test.iam.gserviceaccount.com",
  "client_id": "110038179522133121015",
  "auth_uri": "https://accounts.google.com/o/oauth2/auth",
  "token_uri": "https://oauth2.googleapis.com/token",
  "auth_provider_x509_cert_url": "https://www.googleapis.com/oauth2/v1/certs",
  "client_x509_cert_url": "https://www.googleapis.com/robot/v1/metadata/x509/firebase-adminsdk-ehapk%40probit-push-test.iam.gserviceaccount.com"
}
d4vHMVWPSHCYvUuwsrK-0v:APA91bFef8BTs8XlfTrG-fSWeSGCxMJIp7OLgcKXY6G8ebKyekGZHWBOx1JFp8KPc30QfgMuM8MD5GqBC-9OgPxwsBnamfPdj8t6G-MmGWxf1fxGCoKYteS-CYdDLBJa6y7ZSsvIm461
