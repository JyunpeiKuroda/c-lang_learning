#include <stdio.h>

//  for‚Ì“ñdƒ‹[ƒv
void main() {
    int i, j;
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d+%d=%d  ", i, j, i + j);
        }
        printf("\n");
    }
}