
#include <stdio.h>

int main() {
    int n = 3;
    int knows[3][3] = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0}
    };

    int candidate = 0;

    for (int i = 1; i < n; i++) {
        if (knows[candidate][i] == 1)
            candidate = i;
    }

    int celebrity = 1;

    for (int i = 0; i < n; i++) {
        if (i != candidate &&
            (knows[candidate][i] == 1 ||
             knows[i][candidate] == 0)) {
            celebrity = 0;
            break;
        }
    }

    if (celebrity)
        printf("Celebrity is Person %c\n", 'A' + candidate);
    else
        printf("No celebrity found\n");

    return 0;
}
