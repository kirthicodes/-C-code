#include <stdio.h>

int main() {
    int i, sum = 0;

    for(i = 6; i > 0; i--) {
        sum = sum + i;
    }

    printf("Result:%d\n", sum);

    return 0;
}