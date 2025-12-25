#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<int> divisor[N + 1];
vector<int> unique_prime_div[N + 1];
vector<int> prime_div[N + 1];

void divisor_sieve() {
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            divisor[j].push_back(i);
        }
    }

    for (int i = 2; i <= N; ++i) {
        if (unique_prime_div[i].empty()) {
            for (int j = i; j <= N; j += i) {
                unique_prime_div[j].push_back(i);
            }
        }
    }

    for (int i = 2; i <= N; ++i) {
        if (prime_div[i].empty()) {
            for (int j = i; j <= N; j += i) {
                int x = j;
                while (x % i == 0) {
                    prime_div[j].push_back(i);
                    x /= i;
                }
            }
        }
    }
}

int main() {
    divisor_sieve();
}
