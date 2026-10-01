#include <stdio.h>

int main() {
    int rc;
    printf ("Enter square matrix dimention ");
    scanf("%d ", &rc);

    int a[rc][rc];
    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < rc; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    #include <stdio.h>

int main() {
    int r1, c2;
    scanf("%d %d", &r1, &c2);

    int a[r1][c2], b[r1][c2], sum[r1][c2];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}