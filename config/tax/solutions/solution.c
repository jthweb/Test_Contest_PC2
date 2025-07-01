#include <stdio.h>

void detect_tax_evasion(int reported[], int actual[], int T) {
    for (int i = 0; i < T; i++) {
        if (reported[i] < 0.8 * actual[i]) {
            printf("Evasion\n");
        } else {
            printf("No Evasion\n");
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    int reported[T], actual[T];

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &reported[i], &actual[i]);
    }

    detect_tax_evasion(reported, actual, T);

    return 0;
}