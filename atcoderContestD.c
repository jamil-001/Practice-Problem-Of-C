#include <stdio.h>
#include <stdlib.h>

#define MOD 998244353

long long factorial[3001];
long long inv_factorial[3001];

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

long long mod_inv(long long n, long long mod) {
    return mod_pow(n, mod - 2, mod);
}

void calculate_factorials() {
    factorial[0] = 1;
    inv_factorial[0] = 1;

    for (int i = 1; i <= 3000; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
        inv_factorial[i] = mod_inv(factorial[i], MOD);
    }
}

long long binomial_coefficient(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    return (factorial[n] * inv_factorial[k] % MOD * inv_factorial[n - k] % MOD) % MOD;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    calculate_factorials();

    long long result = 1;
    int unknowns = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (A[i] == -1) {
            unknowns++;
        } else {
            int larger_count = 0;
            for (int j = i + 1; j < N; j++) {
                if (A[j] == -1) {
                    larger_count++;
                } else if (A[j] > A[i]) {
                    larger_count++;
                }
            }
            result = (result * binomial_coefficient(unknowns + larger_count, larger_count)) % MOD;
            unknowns--;
        }
    }

    printf("%lld\n", result);

    return 0;
}

