#include <stdio.h>
#include <math.h>

int main(void) {
    int p = 37, q = 71, e = 79;
    int n = p * q;
    int m = -1;
    int phi = (p - 1) * (q - 1);
    for (int i = 1; i < phi; i++) {
        if ((phi * i + 1) % e == 0) {
            m = i;
            break;
        }
    }
    int d = (m * phi + 1) / e;
    int c = 904;
    int M = pow((double)c, (double)d) % n;
    printf("The original message is: %d\n", M);
    return 0;
}