#include <stdio.h>

void main() {
    int a[3][4];
    int m, n;
    //  “ñŽŸŒ³”z—ñ‚É’l‚ð‘ã“ü
    for (m = 0; m < 3; m++) {
        for (n = 0; n < 4; n++) {
            a[m][n] = m + n;
        }
    }
    //  ¬•ª‚Ì•\Ž¦
    for (m = 0; m < 3; m++) {
        for (n = 0; n < 4; n++) {
            printf("%d ", a[m][n]);
        }
        printf("\n");
    }
}