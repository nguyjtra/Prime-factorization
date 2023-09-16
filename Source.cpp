#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
void s1(ll n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            cout << i << " ";
        }
    } if (n != 1) cout << n;
}

void s2(ll n) {
    int k = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            k = 0;
            while (n % i == 0) {
                n /= i;
                ++k;
            }
            cout << "(" << i << "," << " " << k << ")" << " ";
        }
    } if (n != 1)  cout << "(" << n << "," << " " << 1 << ")" << " ";
}
void s3(ll n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                cout << i << " " << "x" << " ";
            }

        }
    } if (n != 1) cout << n;
}


int main() {
    ll n;
    cin >> n;
    s1(n);
    cout << endl;
    s2(n);
    cout << endl;
    s3(n);
    return 0;
}
