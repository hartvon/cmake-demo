#include <stdio.h>
#include "add/add.h"

void print() {
    int a = 2, b = 3;
    printf("%d + %d = %d\n", a, b, addTwo(a, b));
}