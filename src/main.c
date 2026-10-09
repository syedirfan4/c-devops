#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mathutil.h"

int main(int argc, char **argv) {
    if (argc == 4 && strcmp(argv[1], "gcd") == 0) {
        printf("%d\n", gcd(atoi(argv[2]), atoi(argv[3])));
        return 0;
    }
    if (argc == 3 && strcmp(argv[1], "prime") == 0) {
        printf("%s\n", is_prime(atoi(argv[2])) ? "prime" : "not prime");
        return 0;
    }
    fprintf(stderr, "usage: %s gcd A B | prime N\n", argv[0]);
    return 1;
}
