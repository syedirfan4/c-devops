#include <assert.h>
#include <stdio.h>
#include "../src/mathutil.h"

int main(void) {
    assert(gcd(12, 18) == 6);
    assert(gcd(-12, 18) == 6);
    assert(gcd(7, 0) == 7);
    assert(is_prime(2));
    assert(is_prime(97));
    assert(!is_prime(1));
    assert(!is_prime(91));
    puts("all tests passed");
    return 0;
}
