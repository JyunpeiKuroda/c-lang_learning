#include "calc.h"

int ans;  //  global変数の定義元

void add(int a, int b) {
    ans = a + b;
}

void sub(int a, int b) {
    ans = a - b;
}