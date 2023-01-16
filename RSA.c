#include <stdio.h>
#include <string.h>

void num2alpha(int M) {
    if (M < 0) {
        printf("数値：%dの値が負の値であったため、この関数を動かせません\n", M);
        return;
    }
    int len = 0;
    int tmp = M;
    while (tmp > 0) {
        len++;
        tmp /= 10;
    }
    if (len % 2 != 0) {
        printf("数値：%dの値が偶数桁でなかったので、この関数を動かせません\n", M);
        return;
    }
    else {
        char words[len+1];
        int i = 0;
        while (M > 0) {
            int num = M % 100;
            words[i] = (char)(64 + num);
            M /= 100;
            i++;
        }
        words[i] = '\0';
        int j;
        for (j = i-1; j >= 0; j--) {
            printf("%c", words[j]);
        }
        printf("\n");
    }
}

int main(void) {
    int p = 37, q = 71, e = 79;
    int n = p * q;
    printf("n=: %d\n", n);
    int m = -1;
    int phi = (p - 1) * (q - 1);
    for (int i = 1; i < phi; i++) {
        if ((phi * i + 1) % e == 0) {
            m = i;
            printf("m=: %d\n", m);
            break;
        }
    }
    int d = (m * phi + 1) / e;
    printf("d=: %d\n", d);
    int c = 904;
    int M = 1;
    for (int i = 0; i < d; i++) {
        M *= c;
        M %= n;
    }
    printf("M=: %d\n", M);
    printf("出力結果: ");
    num2alpha(M);
    return 0;
}