#include <stdio.h>

int main() {
    int j, i, k;
    i = 3;
    j = i++;
    i = i - 1;
    k = ++i;

    printf("%d, %d, %d", i, j, k);
}