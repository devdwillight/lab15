#include <iostream>
#include <map>

using namespace std;

const int MAXN = 1000;
int prime[MAXN + 1];

void sangso() {
    for (int i = 0; i <= MAXN; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i  <= MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sangso();
    map<int, int> mp;
    int n;
    cin >> n;
    int original_n = n; // Lưu trữ giá trị gốc của n

    for (int i = 2; i <= original_n; i++) {
        if (prime[i]) {
            while (n % i == 0) {
                n /= i;
                mp[i]++;
            }
        }
    }

    if (n > 1) {
        mp[n]++;
    }

    for (auto it : mp) {
        cout << it.first << "^" << it.second << endl;
    }

    return 0;
}