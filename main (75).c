


#include <stdio.h>

int main() {
    int r1, c2;
    scanf("%d %d", &r1, &c2);

    int a[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int symmetric = 1;

    if (r1 != c2) {
        symmetric = 0;
    } else {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                if (a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
            if (symmetric==0) {
                break;
            }
        }
    }

    if (symmetric) {
        printf("Symmetric\n");
    } else {
        printf("Not Symmetric\n");
    }

    return 0;
}
