#include <stdio.h>
#include <stdlib.h>

int count_unique_colors(int* colors, int N) {
    int* unique = (int*)malloc(N * sizeof(int));
    int unique_count = 0;

    for (int i = 0; i < N; i++) {
        int found = 0;
        for (int j = 0; j < unique_count; j++) {
            if (colors[i] == unique[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[unique_count++] = colors[i];
        }
    }

    free(unique);
    return unique_count;
}

int main() {
    int N;
    scanf("%d", &N);
    int* colors = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &colors[i]);
    }
    printf("%d\n", count_unique_colors(colors, N));
    free(colors);
    return 0;
}