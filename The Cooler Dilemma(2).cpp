#include <stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);
        int months = (y - 1) / x;
        printf("%d\n", months);
    }
    return 0;
}