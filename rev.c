#include <stdio.h>
#include <string.h>

int main() {
    char word_s[101], word_t[101];
    scanf("%s", word_s);
    scanf("%s", word_t);
    if (strcmp(word_s, strrev(word_t)) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
