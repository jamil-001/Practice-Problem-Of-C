#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int min_moves(char *s, char *t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    int common_prefix = 0;
    while (common_prefix < min(len_s, len_t) && s[common_prefix] == t[common_prefix]) {
        common_prefix++;
    }

    return len_s + len_t - 2 * common_prefix;
}

int main() {
    char s[200001], t[200001];

    // Input
    scanf("%s", s);
    scanf("%s", t);

    // Output
    printf("%d\n", min_moves(s, t));

    return 0;
}
