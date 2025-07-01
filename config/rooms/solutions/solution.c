#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    double m = ceil(n / 4.0);  // Use ceil to round up
    printf("%.1f\n", m);
    return 0;
}