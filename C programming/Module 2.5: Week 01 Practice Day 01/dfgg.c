#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        char carpet[20][20];
        for (int i = 0; i < n; i++) {
            scanf("%s", carpet[i]);
        }

        int found = 0;
        for (int c1 = 0; c1 < m; c1++) {
            for (int c2 = c1 + 1; c2 < m; c2++) {
                for (int c3 = c2 + 1; c3 < m; c3++) {
                    for (int c4 = c3 + 1; c4 < m; c4++) {
                        int valid = 0;
                        for (int r = 0; r < n; r++) {
                            if (carpet[r][c1] == 'v' || carpet[r][c2] == 'i' ||
                                carpet[r][c3] == 'k' || carpet[r][c4] == 'a') {
                                valid = 1;
                                break;
                            }
                        }
                        if (valid) {
                            found = 1;
                            break;
                        }
                    }
                    if (found) {
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
