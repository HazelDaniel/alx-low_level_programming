#include <stdio.h>

int power(int a, int b) {
    int result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result *= a;
        }
        a *= a;
        b /= 2;
    }
    return result;
}

int main() {
    int a = 2;
    int b = 5;
    int result = power(a, b);
    printf("%d^%d = %d\n", a, b, result);
    return 0;
}

