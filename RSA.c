#include <stdio.h>
#include <math.h>

int main(void){
    long p, q, e, c, x, y, m, m2, n, i;
    double d, rslt;
    p = 37;
    q = 71;
    e = 79;
    n = p * q;
    c = 904;
    x = (p - 1) * (q - 1);
    y = e - 1;

    printf("n=%d\n", n);
    printf("x=%d\n", x);

    for(m=1; m<e; m++){ //mの開始値は1、終了値はmがeより大きくなるまで、増分値は1ずつ
        if(m * x % e == y){
            break; //if文抜ける
        }
    }
    printf("m=%d\n", m);

    d = (m * (p - 1) * (q - 1) + 1) / e;
    printf("d=%d\n", d);
    
    rslt = pow((long)c, (long)d);
    printf("rslt=%lf\n", rslt);
    m2 = (long)rslt % n;
    printf("m2=%d\n", m2);

    return 0;
        }