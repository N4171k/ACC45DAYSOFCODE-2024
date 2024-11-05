#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        int x = 21 - (a + b);
        if(x > 10 || x<1) {
            printf("-1\n");
        } else {
            printf("%d\n", x);
        }
    }
    return 0;
}
