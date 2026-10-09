#include "mathutil.h"

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a < 0 ? -a : a;
}

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; (long)i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

